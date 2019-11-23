/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 17:02:16 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/23 16:08:25 by bruno         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   *ft_memmove(void *dst, const void *src, size_t len)
{
    char *b; 
    const char *a;
    size_t i;
    int j; 

    j = 0;
    i = 0; 
    b = dst; 
    a = src; 
    while (len > i)
        *(b + i++) = *(a + j++); 
    
    return (b);
}