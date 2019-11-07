/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 12:31:57 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/07 12:37:04 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    else 
        return (0);
}

int     main(void)
{
    char a;
    char b;
    char c;

    a = 'i';

    b = ft_toupper(a);
    c = toupper(a);
    printf("%c\n%c\n", b, c);

    return (0);
}