/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 10:08:43 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/04 15:10:21 by bruno         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_needlecount(const char *ptr)
{
	size_t i;

	i = 0;
	while (ptr[i] != '\0')
		++i;
	return (i);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t q;
	size_t w;

	q = 0;
	if (*needle == 0)
		return ((char*)haystack);
	w = 0;
	while (haystack[q] != 0 && q < len)
	{
		while (haystack[q + w] == needle[w] && needle[w] != 0 && w + q < len)
			++w;
		if (w == ft_needlecount(needle))
		{
			while (haystack[q + w - 1] == needle[w - 1] && w != 0)
				--w;
			if (w == 0)
				return ((char *)&haystack[q]);
		}
		q++;
	}
	return (NULL);
}
