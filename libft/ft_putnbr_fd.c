/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/19 16:20:06 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/04 12:42:50 by bruno         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int				negative;
	char			c;
	unsigned int	i;

	negative = 1;
	if (n < 0)
	{
		write(fd, "-", 1);
		negative = -1;
	}
	i = (unsigned int )(n * negative);
	if (i >= 10)
		ft_putnbr_fd(i / 10, fd);
	c = i % 10 + 48;
	write(fd, &c, 1);
}
