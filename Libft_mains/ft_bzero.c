/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 13:04:17 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/20 13:23:41 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t i;
    char *str;

    i = 0; 
    if (n == 0)
        return ;
    
    str = s;
    while (n > i)
        *(str + i++) = 0;
}




int     main(void)
{
    char str[] = "Hallohallo";
    char str2[] = "HalloHallo";

    bzero(str, sizeof(str));
    printf("%s\n", str);
    printf("%s\n", str2);
    ft_bzero(str2, sizeof(str2));
    printf("%s\n", str2);

    return (0);
}


