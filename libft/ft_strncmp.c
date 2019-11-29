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

#include "libft.h"

int         ft_strncmp(const char *s1, const char *s2, size_t n)
{
      size_t i;

      i = 0;
      while(i <= n)
      {
            if (s1[i + 1] == '\0' || s2[i + 1] == '\0')
                  return ((unsigned char)s1[i] - (unsigned char)s2[i]);
            if (s1[i] < s2[i])
                  return ((unsigned char)s1[i] - (unsigned char)s2[i]);
            if (s1[i] > s2[i])
                  return ((unsigned char)s1[i] - (unsigned char)s2[i]);
            if (s1[i] == s2[i])
                  ++i;
      }
      return (0);
}