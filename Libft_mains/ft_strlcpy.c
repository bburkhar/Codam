/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:29:42 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/05 15:36:11 by bburkhar      ########   odam.nl         */
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

int		main(void)
{
	const char src[] = "HalloHalloHallo";
	char dst[0] = "               ";
	const char src2[] = "HalloHalloHallo";
	char dst2[0] = "               ";

	printf("%s\n", dst);
	strlcpy(dst, src, sizeof(dst));
	printf("%s\n", dst);
	ft_strlcpy(dst2, src2, sizeof(dst2));
	printf("%s\n", dst2);
	return (0);	
}
