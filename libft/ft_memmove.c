/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 17:02:16 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/27 13:05:05 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *b;
    const unsigned char *a;
    size_t i;

    i = 1;
    b = (unsigned char *)dst;
    a = (unsigned char *)src;
    if (b == NULL && a == NULL)
        return (NULL);
    if (a < b)
        while (i <= len)
        {
            b[len - i] = a [len - i];
            ++i;
        }
    else 
        while (len > 0)
        {    
            *(b++) = *(a++);
            --len;
        }
    return (dst);
}