/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 14:33:19 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/07 15:30:29 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    char *new;
    size_t c;
    size_t a;
    int i;
    void *ptr;

    a = 0;
    while (size >= 0)
    {
        --size;
        ++a;
    }
    c = count;
    new = (void *)malloc(c * sizeof(a));

    i = 0;
    while (i <= c)
    {    
        new[i] = '\0';
        ++i;
    }
    return ((void *) new);
}


int     main(void)
{
    char *arr; 

    arr = (void *)ft_calloc(5, sizeof(int));
    printf("%s\n", arr);

    return (0);
}