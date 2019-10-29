/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:23:01 by bburkhar      #+#    #+#                 */
/*   Updated: 2019/10/29 16:21:54 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t		ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t  d; 
	size_t  s;
	size_t	diff; 

	d = 0;
	while (dest[d] != '\0')
			++d;

	diff = 0; 
	while (src[diff] != '\0')
			++diff;
	if (len <= d)
		diff = diff + len;
	else
		diff = diff + d;
	
	s = 0;
	while (src[s] != '\0' && d + 1 < len)
	{
		dest[d] = src[s]; 
		d++;
		s++;
	}
	dest[d] = '\0';
	return (diff);
}


int		main(void)
{
	char src[] = "Wajowsdkjfkasjfkj";
	char dest[] = "Jowaw";


	ft_strlcat(dest, src, sizeof(src));
	printf("%s\n", dest); 

	return (0);
}
