/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 13:43:41 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/20 13:31:42 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *str1;
    const unsigned char *str2;
    size_t i;
    size_t j;

    str1 = (unsigned char *)dst;
    str2 = (unsigned char *)src;
    i = 0;
    j = 0;
    while (i < n)
    {
        *(str1 + j) = *(str2 + j);
        j++;
        i++;
    }
    return (str1);
}