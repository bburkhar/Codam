/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bruno <bruno@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/15 17:58:19 by bruno          #+#    #+#                */
/*   Updated: 2019/11/18 12:11:57 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_intcounter(int a)
{
    int negative;
    int ret;

    negative = 0;
    ret = 0;
    if (a < 0)
    {
        negative = 1;
        a = -1 * a;
    }
    
    if (a == 0)
        return (0);
    else    
        while (a > 0)
        {
            a = a / 10;
            ++ret;
        }
    return (ret + negative);
}

char    *ft_itoa(int n)
{
    char    *new;
    int i;
    int j;
    
    i = 0;
    j = ft_intcounter(n);
    new = malloc(sizeof(char) * j + 1);
    if (n < 0)
        new[i] = '-';
    if (new == NULL)
        return (NULL);
    new[j] = '\0';
    j = j - 1;
    if (n < 0)
    {
        i = 1;
        n = n * -1;
    }
    while (j >= i)
    {
        new[j] = (char)(n % 10) + '0';
        n = n / 10;
        --j;
    }
    return (new);
}

int     main(void)
{
    int a;
    int pr;
    char *hey;

    a = -12345;
    pr = ft_intcounter(a);
    hey = ft_itoa(a);
    printf("%d\n", pr);
    printf("%s\n", hey);
    
    return (0);
}