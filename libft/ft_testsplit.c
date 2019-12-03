/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_testsplit.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 11:39:57 by bburkhar       #+#    #+#                */
/*   Updated: 2019/12/03 11:17:08 by bruno         ########   odam.nl         */
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
		while (sizes[i] - 1 > 0)
		{
			while (s[j] == c)
				++j;
			new[i][copy] = s[j];
			++copy;
			++j;
			--sizes[i] - 1;
		}
		new[i][copy + 1] = '\0';
		++i;
	}
}

char    **ft_split(const char *s, char c)
{
    char    **new;
    int     *sizes;
    int     words;
    int     i;
    
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


static void            ft_print_result(char const *s)
{
    int        len;

    len = 0;
    while (s[len])
        len++;
    write(1, s, len);
}

static void            ft_print_tabstr(char **tabstr)
{
    int        i;

    i = 0;
    while (tabstr[i] != '\0')
    {
        ft_print_result(tabstr[i]);
        write(1, "\n", 1);
        free(tabstr[i]);
        i++;
    }
    free(tabstr);
}

static void            check_split(char *s, char c)
{
    char    **tabstr;

    if (!(tabstr = ft_split(s, c)))
        ft_print_result("NULL");
    else
        ft_print_tabstr(tabstr);
}

int main(void) 
{
  check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
  return (0);
}