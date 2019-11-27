/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 13:56:42 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/27 15:18:08 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    unsigned char *str1; 
    const unsigned char *str2;
    unsigned char a;
    size_t i;
    size_t j;

    str1 = (unsigned char *) dst;
    str2 = (const unsigned char *) src;
    a = (unsigned char) c;
    j = 0; 
    i = 0;
    while (i < n)
    {
        str1[j] = str2[j];
        if (str2[j] == a)
            return ((void*)(dst + i + 1));
        ++j;
        ++i;
    }
    return (NULL);
}
