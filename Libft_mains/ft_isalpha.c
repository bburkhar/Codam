/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 11:26:46 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/07 12:05:14 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    else
        return (0);
}

int     main(void)
{
    char c;
    char b;
    int a; 
    int k;
    int u;
    int i;

    c = '\0';
    b = 'a';

    a = ft_isalpha(c);
    k = ft_isalpha(b);
    u = isalpha(c);
    i = isalpha(b);
    printf("%d %d\n", a, k);
    printf("%d %d\n", u, i);

    return (0);
}
