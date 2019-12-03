/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 14:33:19 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/03 16:40:55 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*new;
	size_t	c;

	if (count == 0 || size == 0)
		return (NULL);
	new = malloc(sizeof(size) * count);
	if (new == NULL)
		return (NULL);
	c = 0;
	while (c <= count)
	{
		((char *)new)[c] = 0;
		++c;
	}
	return (new);
}
