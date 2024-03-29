/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 11:39:57 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/05 14:52:43 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_clean_memory(char **str, size_t index)
{
	size_t i;

	i = 0;
	while (i < index)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t		i;
	size_t		res;

	i = 0;
	res = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		res++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (res);
}

static size_t	ft_word_size(char const *s, char c)
{
	size_t		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char		*ft_next_word(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char *)s);
}

char			**ft_split(char const *s, char c)
{
	size_t		count;
	size_t		i;
	char		**str;

	if (!s)
		return (NULL);
	count = ft_count_words((char *)s, c);
	str = (char **)malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < count)
	{
		s = ft_next_word(s, c);
		str[i] = ft_substr(s, 0, ft_word_size(s, c));
		if (str[i] == NULL)
		{
			ft_clean_memory(str, i);
			return (NULL);
		}
		i++;
		s = s + ft_word_size(s, c);
	}
	str[count] = NULL;
	return (str);
}
