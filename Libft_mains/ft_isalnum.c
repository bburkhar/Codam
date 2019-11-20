/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 12:03:40 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/07 12:11:55 by bburkhar      ########   odam.nl         */
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

int     main(void)
{
    unsigned char a;
    unsigned char b;
    unsigned char c;
    unsigned char d;
    int ab;
    int ac;
    int ad;
    int aa;
    
    a = 'A';
    b = '?';
    c = '0';
    d = '9';

    ab = ft_isalnum(a);
    ac = ft_isalnum(b);
    ad = ft_isalnum(c);
    aa = ft_isalnum(d);
    printf("%d %d %d %d\n", ab, ac, ad, aa);
    return (0);
}