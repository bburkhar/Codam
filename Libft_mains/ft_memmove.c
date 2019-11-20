/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 17:02:16 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/20 13:23:41 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   *ft_memmove(void *dst, const void *src, size_t len)
{
    char *b; 
    const char *a;
    int i;
    int j; 

    j = 0;
    i = 0; 
    b = dst; 
    a = src; 
    while (len > i)
        *(b + i++) = *(a + j++); 
    
    return (b);
}

int     main(void)
{
    char    src[] = "Kaaskaaskaas";
    char    dst[5] = "Koos";
    char    src2[] = "Kaaskaaskaas";
    char    dst2[5] = "Koos";

    memmove(dst, src, 2);
    printf("%s\n", dst);
    ft_memmove(dst2, src2, 2);
    printf("%s\n", dst2);

    return(0);
}


