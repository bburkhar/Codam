/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 18:13:06 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/13 00:16:48 by bruno         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_count(const char *s, char c)
{
    int i;
    int a;

    i = 0;
    a = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            ++a;
        ++i;
    }
    return (a + 1);
}

int     *ft_wordsizes(const char *s, char c)
{
    int i;
    int j;
    int a;
    int *wordsizes;
    int last;

    i = 0;
    a = 0;
    last = 0;
    j = ft_count(s, c);
    wordsizes = malloc(sizeof(int) * j);
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            wordsizes[a] =  i - last;
            last = i;
            ++a;
        }
        ++i;
    }
    if (s[i - 1] == c)
        wordsizes[a] = 1;
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
    wordsizes = ft_wordsizes(s, c);
    while (a < i)
    {
        new[a] = malloc(sizeof(char)* wordsizes[sizes] + 1);
        copy = wordsizes[sizes];
        j = 0;
        while (copy > 0)
        {
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
    char str[] = "HalloeHalloeHalloeHalloeeeeeHallooooeeee";
    char **ptr;
    char a;
    int i;
    int c;

    a = 'e';
    i = 0;
    c = 0;
    while (str[i] != '\0')
    {
        if (str[i] == a)
            ++c;
        ++i;
    }
    i = 0;
    ptr = ft_split(str, a);
    while (i <= c)
    {    
        printf("%s\n", ptr[i]);
        ++i;
    }
    return (0);
}