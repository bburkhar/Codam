/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:23:01 by bburkhar      #+#    #+#                 */
/*   Updated: 2019/10/30 12:33:35 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t		ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t  j;
	size_t 	rest;

	i = 0; 
	while (dest[i] != '\0')
			++i;

	j = 0;
	while (src[j] != '\0')
			j++;

	if (len <= i)
			j = len + j;

	else
			j = j + i; 

	i = 0; 
	if (j < len)
	{
		while (src[i] != '\0' && j < len)
			dest[j] = src[i];
			i++;
			j++;
	}

	return (j);
}


int		main(void)
{
	char src[5] = "Hallo";
	char dest[4] = "Geg";


	ft_strlcat(dest, src, sizeof(dest));
	printf("%s\n", dest); 

	return (0);
}
