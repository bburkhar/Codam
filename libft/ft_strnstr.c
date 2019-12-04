/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 10:08:43 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/04 18:35:57 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_needlecount(const char *ptr)
{
	size_t i;

	i = 0;
	while (ptr[i] != '\0')
		++i;
	return (i);
}

char			*ft_strnstr(const char *hy, const char *nd, size_t len)
{
	size_t q;
	size_t w;

	q = 0;
	if (*nd == 0)
		return ((char*)hy);
	w = 0;
	while (hy[q] != 0 && q < len)
	{
		while (hy[q + w] == nd[w] && nd[w] != 0 && w + q < len)
			++w;
		if (w == ft_needlecount(nd))
		{
			while (hy[q + w - 1] == nd[w - 1] && w != 0)
				--w;
			if (w == 0)
				return ((char *)&hy[q]);
		}
		q++;
	}
	return (NULL);
}
