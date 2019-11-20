/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 12:37:43 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/20 14:15:33 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    else 
        return (0);
}