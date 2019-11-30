/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 12:45:41 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/30 15:32:35 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(const char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		++len;
	return (len);
}
