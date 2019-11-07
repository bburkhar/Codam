/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 11:46:16 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/07 12:04:51 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else 
        return (0);
}

int     main(void)
{
    unsigned char a;
    unsigned char b;
    int i;
    int j;
    int test;
    int p;

    test = 9;
    a = '8';
    b = '4';
    i = isdigit(a);
    j = isdigit(b);
    p = isdigit(test);
    printf("%d  %d  %d\n", i, j, p);

    i = ft_isdigit(a);
    j = ft_isdigit(b);
    p = isdigit(test);    
    printf("%d  %d  %d\n", i, j, p);
    
    return (0);
}