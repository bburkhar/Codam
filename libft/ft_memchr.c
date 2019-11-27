/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 12:44:48 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/27 13:17:46 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sc;
	size_t		i;

    i = 1;
    sc = (unsigned char *)s;
    while (i <= n)
    {
        if (sc[i] == (unsigned char)c)
            return ((void *)sc + i);
        ++i;
    }
    return (0);
}