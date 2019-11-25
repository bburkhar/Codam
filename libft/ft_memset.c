/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 11:36:28 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/25 14:55:48 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *str;
    unsigned char a;
    size_t i;

    a = (unsigned char) c; 
    str = (unsigned char *) b;
    i = 0;
    while (i < len)
    {
        ((char *) str)[i] = a;
        ++i;
    }
        
    return (str);
}