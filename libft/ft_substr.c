/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bruno <bruno@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 17:53:13 by bruno          #+#    #+#                */
/*   Updated: 2019/12/04 15:26:06 by bruno         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (len == 0)
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
