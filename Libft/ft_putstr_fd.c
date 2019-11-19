/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/19 15:53:13 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/19 16:10:31 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        write(fd, &s[i], 1);
        ++i;
    }
}

int     main(void)
{
    char *str = "HalloHalloHallo"; 

    ft_putstr_fd(str, 2);
    write(1, "\n", 1);
    return (0);
}