/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_newsplit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 11:39:57 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/14 23:43:32 by bruno         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_wordcount(const char *s, char c)
{
    int i;
    int count; 

    i = 0;
    count = 0;
    if (s[i] == c)
    {
        while (s[i] == c)
            ++i;
    }
    while (s[i] != '\0')
    {
        if ((s[i] == c && s[i - 1] != c) || (s[i] != c && s[i + 1] == '\0'))
            ++count;
        ++i;
    }
    return (count);
}

int     *ft_sizes(const char *s, char c, int i)
{
    int a;
    int count;
    int index;
    int last;
    int *sizes;

    index = 0;
    a = 0;
    sizes = malloc(sizeof(int) * i);
    if (s[a] == c)
    {
        while (s[a] == c)
            ++a;
    }
    last = a;
    count = 0;
    while (s[a] != '\0')
    {
        if ((s[a] == c && s[a - 1] != c) || (s[a] != c && s[a + 1] == '\0'))
        {
            if (s[a + 1] == '\0')
                   last = last - 1;
            sizes[count] = a - last;
            sizes[count] = sizes[count] + 1;
            while (s[a + 1] == c)
                    ++a;
            if (s[a] == c && s[a + 1] != c)
            {
                last = a;
                last = last + 1;
                ++count;
            }
        }
        ++a;
    }
    return (sizes);
}

char    **ft_split(const char *s, char c)
{
    char    **new;
    int     *sizes;
    int     words;
    int     i;
    int     x;
    int     copy;
    
    i = 0;
    x = 0;
    copy = 0;
    words = ft_wordcount(s, c);
    new = malloc(sizeof(char *) * words);
    sizes = ft_sizes(s, c, words);
    while (s[i] != '\0')
    {
        if ((s[i] == c && s[i + 1] != c) || (s[0] != c))
        {
            i = i + 1;
            new[x] = malloc(sizeof(char) * sizes[x]);
            while (copy < sizes[x])
            {
                new[x][copy] = s[i];
                ++copy;
                ++i;
            }
            new[x][copy + 1] = '\0';
            ++x;
            copy = 0;
        }
        ++i;
    }
    return (new);
}

int    main(void)
 {
    char str[] = "HalloeeeeeeHalloeeeeeHalloeeeeeeeHallo     b";
    char **ptr;
    char a;
    int i;
    int c;
    int *test;
    int x;

    a = 'e';
    x = ft_wordcount(str, a);
    test = ft_sizes(str, a, x);
    i = 0;
    c = 0;

    while (c < x)
    {
        printf("%d", test[c]);
        ++c;
    }
    printf("\n");
    c = 0;
    printf("%d\n", x);
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
    while (i < x)
    {    
        printf("%s\n", ptr[i]);
       ++i;
    }
    return (0);
 }