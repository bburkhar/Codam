/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 12:36:43 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/20 13:23:41 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isprint(int c) 	
{
	if (c >= 32 && c <= 126)
		return (1); 

	else

	return (0);
}

int		main(void)
{
	char c; 

	c = 'Q'; 
	printf("Result when a printable character %c is passed to ft_isprint: %d\n", c, ft_isprint(c)); 
	
	c = 'A'; 
	printf("Result when a printable character %c is passed to ft_isprint: %d\n", c, ft_isprint(c)); 
	
	c = 'a'; 
	printf("Result when a printable character %c is passed to ft_isprint: %d\n", c, ft_isprint(c)); 
	
	c = 'b'; 
	printf("Result when a printable character %c is passed to ft_isprint: %d\n", c, ft_isprint(c)); 
	
	c = '#'; 
	printf("Result when a printable character %c is passed to ft_isprint: %d\n", c, ft_isprint(c)); 

	c = '\n'; 
	printf("\nResult when a control character %c is passed to ft_isprint: %d\n", c, ft_isprint(c)); 
	
	c = '\t';
	printf("\nResult when a control character %c is passed to ft_isprint: %d\n", c, ft_isprint(c)); 


	return (0);
}
