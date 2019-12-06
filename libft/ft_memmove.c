/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 17:02:16 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/05 14:11:12 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*b;
	const unsigned char		*a;
	size_t					x;

	x = 0;
	b = (unsigned char*)dst;
	a = (unsigned char*)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (src < dst)
	{
		x = 1;
		while (x <= len)
		{
			b[len - x] = a[len - x];
			++x;
		}
	}
	else
		while (x < len)
		{
			b[x] = a[x];
			++x;
		}
	return (dst);
}
