/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 12:03:40 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/20 13:28:33 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isalnum(int c)
{
    if ((c >= 'A' && c <= 'Z' )||( c >= 'a' && c <= 'z'))
        return (1);
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}