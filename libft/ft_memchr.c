/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 12:44:48 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/29 15:14:45 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*sc;
	size_t		i;

	i = 0;
	sc = (const char *)s;
	while (i <= n)
	{
		if (sc[i] == (const char)c)
			return ((void *)sc + i);
		++i;
	}
	return (NULL);
}
