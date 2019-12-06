/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:29:42 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/04 18:28:47 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strcount(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

size_t			ft_strlcpy(char *dest, const char *src, size_t len)
{
	int				ret;
	unsigned int	i;

	ret = ft_strcount(src);
	if (dest == NULL || src == NULL)
		return (0);
	if (len == 0)
		return (ret);
	i = 0;
	while (i < len - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ret);
}
