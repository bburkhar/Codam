/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:29:42 by bburkhar      #+#    #+#                 */
/*   Updated: 2019/10/29 16:05:22 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t		ft_strlcpy(char *dest, const char *src, size_t len)
{
	char *d = dest;
	char *e = dest + len; 
	const char *s = src; 

	while (*s != '\0' && d < e)
		*d++ = *s++;
	
	if (d < e)
		*d = 0; 
	
	else if (len > 0)
		d[-1] = 0; 

	while (*s != '\0')
		s++;

	return (s - src);
}

int		main(void)
{
	char src[] = "Wajow wajow ajajajaj";
	char dest[] = "Jowaw jowaj";

	ft_strlcpy(dest, src, sizeof(src));
	printf("%s\n", dest);
	
	return (0);	
}
