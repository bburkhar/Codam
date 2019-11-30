/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 13:45:20 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/30 15:35:00 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	i;
	int		a;

	i = 0;
	while (s1[i] != '\0')
		++i;

	dup = malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
		return (NULL);

	a = 0;
	while (s1[a] != '\0')
	{
		dup[a] = s1[a];
		++a;
	}
	dup[i] = '\0';
	return (dup);
}
