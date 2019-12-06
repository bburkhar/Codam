/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:23:01 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/05 13:42:06 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				ft_strtel(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

static const char		*ft_strlcath(const char *s, size_t dsize, char *d)
{
	while (*s)
	{
		if (dsize != 1)
		{
			*d = *s;
			dsize--;
			d++;
		}
		s++;
	}
	*d = '\0';
	return (s);
}

size_t					ft_strlcat(char *dest, const char *src, size_t len)
{
	char			*d;
	const char		*s;
	size_t			dsize;
	size_t			dlen;
	const char		*ret;

	d = dest;
	s = src;
	dsize = len;
	while (dsize != 0 && *d)
	{
		d++;
		dsize--;
	}
	dlen = d - dest;
	dsize = len - dlen;
	if (dsize == 0)
		return (dlen + ft_strtel(s));
	ret = ft_strlcath(s, dsize, d);
	return (ret - src + dlen);
}
