/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 12:37:43 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/07 12:41:58 by bburkhar      ########   odam.nl         */
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

int     main(void)
{
    char a;
    char b;
    char c;

    a = 'A';

    b = ft_tolower(a);
    c = tolower(a);
    printf("%c\n%c\n", b, c);

    return (0);
}