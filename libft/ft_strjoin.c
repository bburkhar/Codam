/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 14:26:57 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/04 15:59:13 by bruno         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_teller(char const *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		print;
	char	*conc;

	i = ft_teller(s1);
	j = ft_teller(s2);
	if (i == 0 && j == 0)
	{
		conc = malloc(sizeof(char) * 1);
		conc[0] = '\0';
		return (conc);
	}
	conc = malloc(sizeof(char) * (i + j) + 1);
	if (conc == NULL)
		return (NULL);
	print = 0;
	while (print <= (i - 1))
	{
		conc[print] = s1[print];
		++print;
	}
	print = 0;
	while (print <= j)
	{
		conc[i] = s2[print];
		++print;
		++i;
	}
	return (conc);
}
