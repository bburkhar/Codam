/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 13:04:17 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/25 10:39:35 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t i;
    char *str;

    i = 0; 
    if (n == 0)
        return ;
    
    str = s;
    while (n > i)
        *(str + i++) = 0;
}
