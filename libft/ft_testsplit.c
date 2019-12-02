/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 11:39:57 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/02 16:32:53 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_charskip(const char *s, char c, int j)
{
	while (s[j] == c)
		++j;
	return (j);
}

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

	sizes = malloc(sizeof(int) * i);
	a = 0;
	if (s[a] == c)
		a = ft_charskip(s, c, 0);
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

void	ft_filler(char **new, const char *s, char c, int *sizes)
{
	int j;
	int copy;
	int x;
	int words;

	x = 0;
	copy = 0;
	words = ft_wordcount(s, c);
	j = ft_charskip(s, c, 0);
	while (x < words - 1)
	{
		new[x] = malloc(sizeof(char) * sizes[x]);
		copy = 0;
		while (copy < sizes[x])
		{
			j = ft_charskip(s, c, j);
			new[x][copy] = s[j];
			++copy;
			++j;
		}
		copy = sizes[x] - 1;
		new[x][copy] = '\0';
		++x;
	}
	new[words - 1] = NULL;
}

char	**ft_split(const char *s, char c)
{
	char	**new;
	int		*sizes;
	int		words;

	words = ft_wordcount(s, c);
	new = malloc(sizeof(char *) * words);
	if (new == NULL)
		return (NULL);
	sizes = ft_sizes(s, c, words);
	ft_filler(new, s, c, sizes);
	return (new);
}
