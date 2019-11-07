/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 12:16:05 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/07 12:30:10 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    else
        return (0);
}

int     main(void)
{
    unsigned char a; 
    int i;
    int j;

    a = '\0';
    i = isascii(a);
    j = ft_isascii(a);
    printf("%d  %d\n", i, j);
    return (0);
}