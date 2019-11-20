/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bruno <bruno@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 17:53:13 by bruno          #+#    #+#                */
/*   Updated: 2019/11/20 14:15:26 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *new;
    size_t size;
    size_t i;    

    size = len - start;
    if (start == 0 || len == 0)
        return (NULL);
    new = malloc(sizeof(char) * size);
    if (new == NULL)
        return (NULL);
    i = 0;
    while (i <= size)
    {
        new[i] = s[start];
        ++start;
        ++i;
    }
    return (new);
}