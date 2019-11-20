/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 12:45:41 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/20 14:13:57 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>


int		ft_strlen(char *str)
{
	int 	len;

	len = 0; 
	while (str[len] != '\0')
		++len; 
	return (len);
}