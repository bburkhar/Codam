/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 18:13:06 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/08 18:13:06 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    **ft_split(char const *s, char c)
{
    


}

int     main(void)
{
    char str[] = "Hamen Kaas";
    char **ptr;
    char a; 

    a = 'e';
    ptr = ft_split(str, a);
    printf("%s\n", ptr);
    return (0);
}