/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 15:04:02 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/08 18:05:44 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *s2)
{
    int i;
    int j;
    int len;
    int a;
    int b;
    char *new;

    len = 0;
    while (s1[len] != '\0')
        ++len;
    i = 0;
    j = 0;
    while (s2[i] != '\0')
    {
        if (s1[j] == s2[i])
        {
            ++j;
            i = -1;
        }
        ++i;
    }
    i = 0;
    a = 0;
    len = len - 1;
    while (s2[i] != '\0')
    {
        if (s2[i] == s1[len])
        {
            --len;
            i = -1;
        }
        ++i;
    }
    new = malloc(sizeof(char) * (((len - j) + 2)));
    a = 0;
    b = len - j + 1;
    while (a < b)
    {
        new[a] = s1[j];
        ++a;
        ++j;
    }
    new[a] = '\0';
    return (new);
}

int     main(void)
{
    char str[] = "papaapppa\napplloHalloappappapapapp";
    char str2[] = "p\na";
    char *ptr;

    ptr = ft_strtrim(str, str2);
    printf("%s\n", ptr);
    return (0);
}