/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 12:45:41 by bburkhar      #+#    #+#                 */
/*   Updated: 2019/10/29 12:45:45 by bburkhar      ########   odam.nl         */
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

int		main(int ac, char **av)
{
	if (ac != 2)
		write(1, "Fout", 4);
	else 
		printf("%d\n", ft_strlen(av[1]));
	return (0);
}
