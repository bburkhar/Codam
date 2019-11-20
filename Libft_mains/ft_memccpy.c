/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 13:56:42 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/05 14:32:00 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    unsigned char *str1; 
    const unsigned char *str2;
    unsigned char a;
    size_t i;
    size_t j;

    str1 = (unsigned char *) dst;
    str2 = (const unsigned char *) src;
    a = (unsigned char) c;
    j = 0; 
    i = 0; 
    while (i < n)
    {
        if (str2[j] == a)
            return (str1);
        *(str1 + j) = *(str2 + j);
        ++j; 
        ++i;
    }
    return (str1);
}

int     main(void)
{
    char src[] = "This is a string!"; 
    char dst[] = "This is a Z destination!";
    char src2[] = "This is a string!"; 
    char dst2[] = "This is a Z destination!";
    char c; 

    c = 'Z';
    printf("String before memccpy : %s\n", dst); 
    memccpy(dst, src, c, 17);
    printf("String after memccpy : %s\n", dst);
    printf("String before ft_memccpy : %s\n", dst2); 
    ft_memccpy(dst2, src2, c, 17);
    printf("String after ft_memccpy : %s\n", dst2);
    return (0);
}


