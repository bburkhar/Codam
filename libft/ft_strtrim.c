/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 15:04:02 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/04 18:36:23 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_tel(char const *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

static int		ft_end(char const *s1, char const *s2, int len)
{
	int i;

	i = 0;
	len = len - 1;
	while (s2[i] != '\0')
	{
		if (len == -1)
			return (0);
		if (s1[len] == s2[i])
		{
			--len;
			i = -1;
		}
		++i;
	}
	return (len);
}

static char		*ft_strmaker(char const *s1, int end, int start)
{
	char	*new;
	int		size;
	int		i;

	size = end - start + 1;
	if (end == 0 && start == 0)
		size = -1;
	new = (char *)malloc(sizeof(char) * size + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new[i] = s1[start];
		++i;
		++start;
	}
	new[i] = '\0';
	return (new);
}

char			*ft_strtrim(char const *s1, char const *s2)
{
	char	*new;
	int		start;
	int		i;
	int		end;

	start = 0;
	i = 0;
	end = ft_end(s1, s2, ft_tel(s1));
	while (s2[i] != '\0')
	{
		if (s1[start] == s2[i])
		{
			++start;
			i = -1;
		}
		++i;
	}
	if (s1[start] == '\0')
		start = 0;
	new = ft_strmaker(s1, end, start);
	return (new);
}
