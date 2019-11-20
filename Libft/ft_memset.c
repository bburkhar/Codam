/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 11:36:28 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/20 13:31:42 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *str;
    unsigned char a; 

    a = (unsigned char) c; 
    str = (unsigned char *) b;
    while (len > 0)
    {
         *(str++) = a;
        --len;
    }
        
    return (str);
}