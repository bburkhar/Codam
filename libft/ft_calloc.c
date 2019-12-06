/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 14:33:19 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/05 16:26:11 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*memset(void *b, int c, size_t len)
{
	unsigned char		*str;
	unsigned char		a;
	size_t				i;

	a = (unsigned char)c;
	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		((char *)str)[i] = a;
		++i;
	}
	return (str);
}

void			*ft_calloc(size_t count, size_t size)
{
	char	*new;

	new = (char *)malloc(count * size);
	if (new == NULL)
		return (NULL);
	return (memset(new, 0, count * size));
}
