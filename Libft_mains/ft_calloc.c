/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 14:33:19 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/07 17:31:52 by bruno         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    char *new;
    size_t c;

    if (count == 0 || size == 0)
        return (NULL);

    new = malloc((size * count) + 1);

    if (new == NULL)
        return (NULL);

    c = 0;
    while (c <= count * size)
    {    
        new[c] = '\0';
        ++c;
    }
    return (new);
}


int     main(void)
{
    char *arr; 

    arr = (void *)ft_calloc(10, sizeof(int));
    printf("%s\n", arr);
    if (arr[40 * sizeof(int)] == '\0')
        printf("Calloc succesvol\n");

    return (0);
}