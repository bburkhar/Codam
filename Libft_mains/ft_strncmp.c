/*************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <bburkhar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 15:37:37 by bburkhar       #+#    #+#                */
/*   Updated: 2019/10/31 11:17:21 by bburkhar      ########   odam.nl         */
/*                                                                            */
/*************************************************************************** */

#include <stdio.h>
#include <string.h>

int         ft_strncmp(const char *s1, const char *s2, size_t n)
{
      int i;

      i = 0;
      while(s1[i] != '\0' && s2[i] != '\0' && i <= n)
      {
            if (s1[i] < s2[i])
                  return (s1[i] - s2[i]);
            if (s1[i] > s2[i])
                  return (s1[i] - s2[i]);
            if (s1[i] == s2[i])
                  ++i;
      }
      return (0);
}

int     main(void)
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    char str1[6] = "Abcdef";
    char str2[6] = "abcdef";
    char str3[6] = "abcdef";
    char str4[6] = "abcDef";
    char str5[6] = "abcdef";
    char str6[6] = "abcdeF";

    a = strncmp(str1, str2, 6);
    b = ft_strncmp(str1, str2, 6);
    c = strncmp(str3, str4, 4);
    d = ft_strncmp(str3, str4, 4);
    e = strncmp(str5, str6, 6);
    f = ft_strncmp(str5, str6, 6);

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", f);

    return (0);
}