/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/19 16:20:06 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/03 17:57:07 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		negative;
	char	c;

	negative = 1;
	if (n < 0)
	{
		write(fd, "-", 1);
		negative = -1;
	}
	n = n * negative;
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = n % 10 + 48;
	write(fd, &c, 1);
}
