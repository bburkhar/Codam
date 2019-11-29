/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 15:04:02 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/29 18:06:28 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tel(char const *str)
{
	int i;

	i = 0;
	while (str != '\0')
		++i;
	return (i);
}

int		ft_end(char const *s1, char const *s2, int len)
{
	int i;
	int ret;

	ret = len;
	while (len > 0)
	{
		i = 0;
		while (s2[i] != '\0')
		{
			if (s1[len] == s2[i])
				--ret;
			++i;
		}
		--len;
	}
	return (ret);
}

char	*ft_strmaker(char const *s1, int end, int start)
{
	char	*new;
	int		size;
	int		i;

	size = end - start;
	new = (char *)malloc(sizeof(char) * size + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < end)
	{
		new[i] = s1[start];
		++i;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	char	*new;
	int		start;
	int		i;
	int		j;
	int		end;

	start = 0;
	i = 0;
	end = ft_end(s1, s2, ft_tel(s1));
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
				++start;
			++j;
		}
		++i;
	}
	new = ft_strmaker(s1, end, start);
	return (new);
}
