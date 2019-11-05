/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 12:03:26 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/04 12:29:40 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i; 

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    i = 0;
    while (n-- != 0)
    {  
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}

int     main(void)
{
    char str[] = "HalloHallo";
    char str2[] = "HalloHello"; 
    char str3[] = "HalloHello";
    int i; 
    int j; 

    i = memcmp(str, str2, sizeof(str2));
    printf("Comparing string 1 & 2 gives : %i\n", i);

    j = memcmp(str, str3, sizeof(str3));
    printf("Comparing string 1 & 3 gives : %i\n", j);

    i = ft_memcmp(str, str2, sizeof(str2));
    printf("Comparing string 1 & 2 gives : %i\n", i);

    j = ft_memcmp(str, str3, sizeof(str3));
    printf("Comparing string 1 & 3 gives : %i\n", j);

    return (0);
}


