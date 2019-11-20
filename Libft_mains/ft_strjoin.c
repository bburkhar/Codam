/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 14:26:57 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/08 14:42:52 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char    *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    int print;
    char *conc;

    i = 0;
    while (s1[i] != '\0')
        ++i;
    j = 0;
    while (s2[j] != '\0')
        ++j;
    conc = malloc(sizeof(char) * (i + j - 1));
    if (conc == NULL)
        return (NULL);
    print = 0;
    while (print <= (i - 1))
    {
        conc[print] = s1[print];
        ++print;
    }
    print = 0;
    while (print <= j)
    {
        conc[i] = s2[print];
        ++print;
        ++i;
    }
    return (conc);
}

int     main(void)
{
    char str1[] = "Ham-";
    char str2[] = "Kaastosti !!!";
    char *ptr;

    ptr = ft_strjoin(str1, str2);
    printf("String 1 : %s\nString 2 : %s\nString 1 + 2 : %s\n", str1, str2, ptr);
    return (0);
}

