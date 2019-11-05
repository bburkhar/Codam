/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 15:44:42 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/05 16:01:46 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char *ptr;
    unsigned char a;
    int i;

    a = (const unsigned char) c;
    ptr = (char *) s;
    i = 0;
    while (ptr[i] != '\0')
    {
        if (ptr[i] == a)
            return (ptr + i);
        if (ptr[i] == '\0')
            return (0);
        ++i;
    }
    return (NULL);
}

int     main(void)
{
    const char str[] = "HalloHallo\0HalloHallo";
    char a;
    char *ptr;
    char *ptr2;

    a = '\0';    
    ptr = strchr(str, a);
    printf("%s\n", ptr);
    ptr2 = ft_strchr(str, a);
    printf("%s\n", ptr2);
    return (0);   
}

