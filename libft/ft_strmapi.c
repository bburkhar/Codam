/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/18 12:34:22 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/20 14:14:03 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    ft_test(unsigned int index, char s)
{
    s = index + '0';
    return (s);
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *new;
    int index;
    int i;

    i = 0;
    while (s[i] != '\0')
        ++i;
    new = malloc(sizeof(char) * i + 1);
    new[i] = '\0';
    if (new == NULL)
        return (NULL);
    index = 0;
    while (new[index] != '\0')
    {
        new[index] = f(index, s[index]);
        ++index;
    }
    new[index] = '\0';
    return (new);
}