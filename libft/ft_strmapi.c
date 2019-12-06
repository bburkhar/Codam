/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/18 12:34:22 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/05 15:51:31 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*string;

	i = 0;
	if (s && f)
	{
		string = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (!string)
			return (NULL);
		while (s[i] != '\0')
		{
			string[i] = f(i, s[i]);
			i++;
		}
		string[i] = '\0';
		return (string);
	}
	return (NULL);
}
