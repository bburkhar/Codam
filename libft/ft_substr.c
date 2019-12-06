/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bruno <bruno@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 17:53:13 by bruno          #+#    #+#                */
/*   Updated: 2019/12/04 18:36:32 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count(char const *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		++i;
	return (i);
}

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	size_t			i;
	unsigned int	a;

	a = count(s);
	if (len == 0 || a < start)
	{
		new = (char*)malloc(sizeof(char) * 1);
		new[0] = '\0';
		if (new == NULL)
			return (NULL);
		return (new);
	}
	new = (char*)malloc(sizeof(char) * len + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (len > 0)
	{
		new[i] = s[start + i];
		++i;
		--len;
	}
	new[i] = '\0';
	return (new);
}
