/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/19 16:13:55 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/19 16:16:49 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        write(fd, &s[i], 1);
        ++i;
    }
    write(fd, "\n", 1);
}

int     main(void)
{
    char *str = "HalloHalloHallo";
    ft_putendl_fd(str, 1);
    return (0);
}