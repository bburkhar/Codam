/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bruno <bruno@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 19:46:59 by bruno          #+#    #+#                */
/*   Updated: 2019/11/07 10:04:24 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


char    *ft_strrchr(const char *s, int c)
{
    int len;
    int i;
    char *ptr;
    unsigned char a; 

    len = 0;
    ptr = (char *) s;
    while (ptr[len] != '\0')
        ++len;

    i = len; 
    a = (const unsigned char) c;
    len = len - 1;
    while (len >= 0)
    {
        if (ptr[len] == a)
            return (ptr + len);
        --len;
    }
    if (ptr[i] == c)
        return (ptr + i);
    return (NULL);
}


int     main(void)
{
    char str[] = "HalloHalloZHallo";
    char *ptr;
    char *ptr2;
    char a;

    a = '\0'; 
    printf("%s\n", str);
    ptr = strrchr(str, a);
    printf("%s\n", ptr);
    ptr2 = ft_strrchr(str, a);
    printf("%s\n", ptr2);

    return (0);
}