/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 18:13:06 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/13 17:10:47 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strlen(const char *str)
{
    int i; 

    i = 0;
    while (str[i] != '\0')
        ++i;
    return (i);
}

int     ft_count(const char *s, char c)
{
    int i;
    int a;
    int x;
    
    i = 0;
    a = 0;
    x = ft_strlen(s);
    if (s[i] == c)
    {
        while (s[i] == c)
            ++i;
    }
    if (s[x] == c)
    {
        while (s[x] == c)
            --x;
    }
    while (i != x)
    {
        if (s[i] == c && s[i - 1] != c)
            ++a;
        ++i;
    }
    ++a;
    return (a);
}

int     *ft_wordsizes(const char *s, char c, int j)
{
    int i;
    int a;
    int *wordsizes;
    int last;
    int x;

    i = 0;
    a = 0;
    wordsizes = malloc(sizeof(int) * j);
    if (s[i] == c)
    {
        while (s[i] == c)
            ++i;
    }
    last = i;
    while (s[i] != '\0')
    {
        if (s[i] == c || s[i + 1] == '\0')
        {
            while (s[i] == c)
            {
                ++i;
                ++last;
            }
            if (s[i] != c && s[i + 1] == '\0')
                last = last - 1;
            wordsizes[a] =  i - last;
            last = i;
            ++a;
        }
        ++i;
    }
    return (wordsizes);
}

char    **ft_split(const char *s, char c)
{
    char **new;
    int *wordsizes;
    unsigned int sizes;
    int i;
    int a;
    int copy;
    int j;
    int x;

    i = ft_count(s, c);
    a = 0;
    sizes = 0;
    x = 0;
    new = malloc(sizeof(char *) * i);
    wordsizes = ft_wordsizes(s, c, i);
    while (a < i)
    {
        new[a] = malloc(sizeof(char)* wordsizes[sizes] + 1);
        copy = wordsizes[sizes];
        j = 0;
        while (copy > 0)
        {
            while (s[x] == c)
                ++x;
            new[a][j] = s[x];
            ++j;
            --copy;
            ++x;
        }
        new[a][j] = '\0';
        ++a;
        ++sizes;
    }
    return (new);
}

int     main(void)
{
    char str[] = "    Hallo Hallo Hallo Hallo e ";
    char **ptr;
    char a;
    int i;
    int c;
    int *test;

    a = ' ';
    test = ft_wordsizes(str, a, ft_count(str, a));
    i = 0;
    c = 0;

    while (c < ft_count(str,a))
    {
        printf("%d", test[c]);
        ++c;
    }
    printf("\n");
    c = 0;
    printf("%d\n", ft_count(str, a));
    if (str[i] == c)
    {
        while (str[i] == c)
            ++i;
    }
    while (str[i] != '\0')
    {
        if (str[i] == a && str[i - 1] != a)
            ++c;
        ++i;
    }

    i = 0;
    ptr = ft_split(str, a);
    while (i < ft_count(str, a))
    {    
        printf("%s\n", ptr[i]);
        ++i;
    }
    return (0);
}