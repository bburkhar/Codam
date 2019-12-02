/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 11:39:57 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/02 15:14:31 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(const char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (s[i] == c)
	{
		while (s[i] == c)
			++i;
	}
	while (s[i] != '\0')
	{
		if ((s[i] == c && s[i - 1] != c) || (s[i] != c && s[i + 1] == '\0'))
			++count;
		++i;
	}
	count = count + 1;
	return (count);
}

int		*ft_sizes(const char *s, char c, int i)
{
	int a;
	int count;
	int last;
	int *sizes;

	a = 0;
	sizes = malloc(sizeof(int) * i);
	if (s[a] == c)
	{
		while (s[a] == c)
			++a;
	}
	last = a;
	count = 0;
	while (s[a] != '\0')
	{
		if ((s[a] == c && s[a - 1] != c) || (s[a] != c && s[a + 1] == '\0'))
		{
			if (s[a + 1] == '\0')
			{
				if (s[a + 1] == '\0' && s[a] == c)
					last = last + 1;
				last = last - 1;
			}
			sizes[count] = a - last;
			sizes[count] = sizes[count] + 1;
			while (s[a + 1] == c)
				++a;
			if (s[a] == c && s[a + 1] != c)
			{
				last = a;
				last = last + 1;
				++count;
			}
		}
		++a;
	}
	return (sizes);
}

char    **ft_split(const char *s, char c)
{
    char    **new;
    int     *sizes;
    int     words;
    int     i;
    int     x;
    int     copy;
    int     j;
	int 	size;
    
    i = 0;
    x = 0;
	j = 0;
    words = ft_wordcount(s, c);
    new = malloc(sizeof(char *) * words);
    if (new == NULL)
        return (NULL);
    sizes = ft_sizes(s, c, words);
	while (s[j] == c)
		++j;
    while (i < words - 1)
    {
		new[i] = malloc(sizeof(char) * sizes[x]);
		copy = 0;
		size = sizes[x] - 1;
		while (size > 0)
		{
			while (s[j] == c)
				++j;
			new[i][copy] = s[j];
			++copy;
			++j;
			--size;
		}
		size = sizes[x] - 1;
		new[i][size] = '\0';
		++x;
		++i;
	}
	new[words - 1] = NULL;
    return (new);
}
