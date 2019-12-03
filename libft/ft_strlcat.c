/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:23:01 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/03 17:43:57 by bburkhar      ########   odam.nl         */
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
	char			*d;
	const char		*s;
	size_t			dsize;
	size_t			dlen;

	d = dest;
	s = src;
	dsize = len;
	while (dsize-- != 0 && *d)
		d++;
	dlen = d - dest;
	dsize = len - dlen;
	if (dsize == 0)
		return (dlen + ft_strtel(s));
	while (*s)
	{
		if (dsize != 1)
		{
			*d++ = *s;
			dsize--;
		}
		s++;
	}
	*d = '\0';
	return (s - src + dlen);
}
