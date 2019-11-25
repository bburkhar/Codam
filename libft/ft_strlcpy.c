/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:29:42 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/20 14:13:50 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t len)
{
	char *d = dest;
	const char *s = src;
	size_t i;

	i = 0;
	while (d[i] != '\0' && i < len)
	{
		d[i] = s[i];
		i++;
	}

	return (len);
}