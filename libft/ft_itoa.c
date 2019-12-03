/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bruno <bruno@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/15 17:58:19 by bruno          #+#    #+#                */
/*   Updated: 2019/12/03 19:26:47 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intcounter(int a)
{
	int ret;
	int negative;

	negative = 0;
	ret = 0;
	if (a < 0)
	{
		negative = 1;
		a = a * -1;
	}
	if (a == 0)
		return (0);
	else
		while (a > 0)
		{
			a = a / 10;
			++ret;
		}
	return (ret + negative);
}

void	ft_filler(char *new, int j, int n)
{
	int i;

	i = 0;
	if (n < 0)
		new[i] = '-';
	new[j] = '\0';
	j = j - 1;
	if (n < 0)
	{
		i = 1;
		n = n * -1;
	}
	while (j >= i)
	{
		new[j] = (char)(n % 10) + '0';
		n = n / 10;
		--j;
	}
}

char	*ft_itoa(int n)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = ft_intcounter(n);
	if (j == 0)
	{
		new = malloc(sizeof(char) * 1 + 1);
		new[i] = '0';
		new[i + 1] = '\0';
		return (new);
	}
	new = malloc(sizeof(char) * j + 1);
	if (new == NULL)
		return (NULL);
	ft_filler(new, j, n);
	return (new);
}

int     main(void)
{
    int a;
    int pr;
    char *hey;

    a = -2147483647 -1;
    pr = ft_intcounter(a);
    hey = ft_itoa(a);
    printf("%d\n", pr);
    printf("%s\n", hey);
    
    return (0);
}
