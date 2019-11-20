/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_testsplit.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/20 14:30:47 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/20 15:09:00 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_split_count_words(char *str, char *charset)
{
	int	c;
	int	word;
	int	lword;

	c = 0;
	word = 0;
	lword = 0;
	while (str[c] != '\0')
	{
		if (ft_strncmp(&str[c], charset, ft_strlen(charset)) == 0)
		{
			c += ft_strlen(charset);
			lword = 0;
		}
		else
		{
			if (!lword)
				word++;
			lword++;
			c++;
		}
	}
	return (word);
}

void	ft_split_new_word(int *lword, int *word, int *c)
{
	if (!*lword)
		(*word)++;
	(*lword)++;
	(*c)++;
}

char	*ft_split_get_word(char *str, char *charset, int nword)
{
	int		c;
	int		word;
	int		lword;
	char	*strword;

	c = 0;
	word = 0;
	lword = 0;
	while (str[c] != '\0')
	{
		if (ft_strncmp(&str[c], charset, ft_strlen(charset)) == 0)
		{
			c += ft_strlen(charset);
			lword = 0;
		}
		else
			ft_split_new_word(&lword, &word, &c);
		if (((ft_strncmp(&str[c], charset, ft_strlen(charset)) == 0)
			|| str[c] == '\0') && word == nword)
			{
				strword = malloc(sizeof(char *) * (lword + 1));
				return (ft_strncpy(strword, &str[c - (lword)], lword));
			}
	}
	return (NULL);
}

char **ft_split(char *str, char *charset)
{
	char	**tab;
	int		nbword;
	int		i;

	nbword = ft_split_count_words(str, charset);
	tab = malloc(sizeof(char *) * (nbword + 1));
	i = 0;
	while (i < nbword)
	{
		tab[i] = ft_strdup(ft_split_get_word(str, charset, i + 1));
		i++;
	}
	tab[i] = malloc(sizeof(char) * 1);
	tab[i][0] = '\0';
	return (tab);
}

int    main(void)
 {
    char str[] = "HalloeHalloe  eHalloee     ";
    char **ptr;
    char a;
    int i;
    int c;
    int *test;
    int x;

    a = '\0';
    x = ft_split_count_words(str, a);
    //test = ft_sizes(str, a, x);
    i = 0;
    c = 0;

    //while (c < x)
    //{
       // printf("%d", test[c]);
       // ++c;
    //}
    printf("\n");
    c = 0;
    printf("%d\n", x);
    if (str[i] == c)
    {
        while (str[i] == c)
            ++i;
    }
    while (str[i] != '\0')
    {
        if (str[i] == a && str[i - 1] != a)
            ++c;
        ++i;
    }

    i = 0;
    ptr = ft_split(str, a);
    while (i < x)
    {    
        printf("%s\n", ptr[i]);
       ++i;
    }
    return (0);
 }