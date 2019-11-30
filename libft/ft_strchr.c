/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 15:44:42 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/30 15:38:18 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*ptr;
	unsigned char	a;
	int				i;

	a = (const unsigned char)c;
	ptr = (char *)s;
	i = 0;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == a)
			return (ptr + i);
		++i;
	}
	if (ptr[i] == '\0' && a == '\0')
		return (ptr + i);

	return (NULL);
}
