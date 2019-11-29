/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 13:56:42 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/26 12:53:09 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    unsigned char *str1; 
    const unsigned char *str2;
    unsigned char a;
    size_t i;

    str1 = (unsigned char *) dst;
    str2 = (const unsigned char *) src;
    a = (unsigned char) c;
    i = 0;
    while (i < n)
    {
        str1[i] = str2[i];
        if (str1[i] == (unsigned char) c)
            return ((void *) dst + i + 1);
        ++i;
    }
    return (NULL);
}