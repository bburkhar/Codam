/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 11:39:57 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/03 15:53:15 by bburkhar      ########   odam.nl         */
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

void	ft_sizefiller(const char *s, char c, int *sizes, int a)
{
	int count;
	int last;

	last = a;
	count = 0;
	while (s[a] != '\0')
	{
		if ((s[a] == c && s[a - 1] != c) || (s[a] != c && s[a + 1] == '\0'))
		{
			if (s[a + 1] == '\0' && s[a] == c)
				last = last + 1;
			if (s[a + 1] == '\0')
				last = last - 1;
			sizes[count] = a - last + 1;
			while (s[a + 1] == c)
				++a;
			if (s[a] == c && s[a + 1] != c)
			{
				last = a + 1;
				++count;
			}
		}
		++a;
	}
}

int		*ft_sizes(const char *s, char c, int i)
{
	int a;
	int *sizes;
	int k;

	k = ft_wordcount(s, c);
	a = 0;
	sizes = malloc(sizeof(int) * i);
	if (s[a] == c)
	{
		while (s[a] == c)
			++a;
	}
	ft_sizefiller(s, c, sizes, a);
	sizes[k - 1] = 0;
	return (sizes);
}

void	ft_wordfiller(int *sizes, const char *s, char c, char **new)
{
	int j;
	int copy;
	int i;
	int words;

	j = 0;
	words = ft_wordcount(s, c);
	i = 0;
	while (i < words - 1)
	{
		copy = 0;
		sizes[i] = sizes[i] - 1;
		while (sizes[i] > 0)
		{
			while (s[j] == c)
				++j;
			new[i][copy] = s[j];
			++copy;
			++j;
			--sizes[i];
		}
		new[i][copy] = '\0';
		++i;
	}
}

char	**ft_split(const char *s, char c)
{
	char	**new;
	int		*sizes;
	int		words;
	int		i;

	i = 0;
	words = ft_wordcount(s, c);
	new = malloc(sizeof(char *) * words);
	if (new == NULL)
		return (NULL);
	sizes = ft_sizes(s, c, words);
	while (i < words - 1)
	{
		new[i] = malloc(sizeof(char) * sizes[i]);
		++i;
	}
	ft_wordfiller(sizes, s, c, new);
	new[words - 1] = NULL;
	return (new);
}
