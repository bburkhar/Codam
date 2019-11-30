/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:23:01 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/30 15:20:59 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strtel(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

size_t		ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size_dest;
	size_t	size_src;

	size_dest = ft_strtel(dest);
	size_src = ft_strtel(src);
	if (len <= size_dest)
		return (size_src + len);
	j = size_dest;
	i = 0;
	while (src[i] != '\0' && j < len - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (size_dest + size_src);
}
