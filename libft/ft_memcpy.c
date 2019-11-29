/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 13:43:41 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/29 18:13:44 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char			*str1;
	const unsigned char		*str2;
	size_t					i;
	size_t					j;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	i = 0;
	j = 0;
	if (n == 0 || dst == src)
		return (dst);
	while (i < n)
	{
		((char *)str1)[j] = ((char *)str2)[j];
		j++;
		i++;
	}
	return (str1);
}
