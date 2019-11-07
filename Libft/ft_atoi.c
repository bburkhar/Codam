/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 12:42:12 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/07 13:37:51 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *str)
{
    int i;
    int result;
    int negative;

    negative = 1;
    result = 0;
    i = 0;
    while (str[i] != '\0' && (str[i] == '\t' || str[i] == ' ' || str[i] == '\n'||
                                                str[i] == '\v' || str[i] == '\f'))
            ++i;
    if (str[i] == '-')
        negative = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - 48);
        ++i;
    }    
    return (result * negative);
}

int     main(void)
{
    int i;
    char str[] = "     -9782  737";
    char str2[] = "HalloHalloHallo";

    i = ft_atoi(str);
    printf("String : %s string value : %d\n", str, i);
    i = ft_atoi(str2);
    printf("String : %s string value : %d\n", str2, i);

    i = atoi(str);
    printf("String : %s string value : %d\n", str, i);
    i = atoi(str2);
    printf("String : %s string value : %d\n", str2, i);

    return (0);
}