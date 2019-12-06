/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 12:42:12 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/05 14:54:57 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_iswhitespace(int c)
{
	c = (unsigned char)c;
	if (c != '\0' && (c == ' ' || c == '\t' || c == '\v' ||
		c == '\f' || c == '\r' || c == '\n'))
		return (1);
	return (0);
}

int				ft_atoi(const char *str)
{
	unsigned long	res;
	int				i;
	int				sig;

	i = 0;
	res = 0;
	sig = 1;
	while (ft_iswhitespace(str[i]))
		i++;
	if (str[i] == '-')
		sig *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
		if (res > 9223372036854775807 && sig == -1)
			return (0);
		else if (res > 9223372036854775807 && sig == 1)
			return (-1);
	}
	return (sig * res);
}
