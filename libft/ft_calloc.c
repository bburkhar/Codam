/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 14:33:19 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/29 15:52:48 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new;
	size_t	c;

	new = malloc(size * count);
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
