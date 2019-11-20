/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 10:08:43 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/07 11:12:03 by bburkhar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    char *hs;
    char *nd;
    int i;
    size_t j;
    size_t ret;
    size_t count;
    
    hs = (char *) haystack;
    nd = (char *) needle;
    i = 0;   
    j = 0;
    ret = 0; 
    count = 0;
    while (nd[count] != '\0')
        ++count; 
    
    if (nd[i] == '\0')
       return (hs + ret);

    count = count - 1;
    while (j < len)
    {
        if (hs[j] == nd[i])
        {
            while (hs[j] == nd[i])
            {    
                ++i;
                ++j;
            if (count == i)
                return (hs + ret);
            }

        }
        ++j;
        ++ret;
    }
   
    return (NULL);
}

int     main(void)
{
    const char hy[] = "HalloHallHIERoHalHallo";
    const char nd[] = "HIER";
    char *ptr;
    char *ptr2;

    ptr = strnstr(hy, nd, sizeof(hy));
    printf("%s\n", ptr);
    ptr2 = ft_strnstr(hy, nd, sizeof(hy));
    printf("%s\n", ptr2);
    return (0);
}