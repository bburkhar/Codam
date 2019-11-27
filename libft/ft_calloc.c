/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 14:33:19 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/27 14:51:09 by bburkhar      ########   odam.nl         */
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