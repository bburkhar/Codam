/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/18 12:34:22 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/18 12:37:09 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void print()  
{
    printf("Hello World!");
}
void helloworld(void (*f)())  
{
    f();
}
int main(void)  
{
    helloworld(print);
    return (0);
}





