/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 12:42:12 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/04 18:27:26 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(const char *str)
{
	int i;
	int negative;

	i = 0;
	negative = 1;
	while (str[i] && (str[i] == '\t' || str[i] == ' ' || str[i] == '\n' ||
						str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		++i;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '-' || str[i] == '+')
		++i;
	return (i * negative);
}

int			ft_atoi(const char *str)
{
	int i;
	int result;
	int negative;

	negative = 1;
	result = 0;
	i = ft_start(str);
	if (i < 0)
	{
		negative = -1;
		i = negative * i;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		if (result > 214748364)
		{
			if (negative == 1)
				return (-1);
			if (negative == -1)
				return (0);
		}
		result = (result * 10) + (str[i] - '0');
		++i;
	}
	return (result * negative);
}
