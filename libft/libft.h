/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 12:32:46 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/15 17:43:42 by bruno         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
	void		*ft_memset(void *b, int c, size_t len);
	void		ft_bzero(void *s, size_t n);
	void 		*ft_memcpy(void *dst, const void *src, size_t n);
	void		*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
	void		*ft_memmove(void *dst, const void *src, size_t len);
	void		*ft_memchr(const void *s, int c, size_t n);
	int 		ft_memcmp(const void *s1, const void *s2, size_t n);
	int			ft_strlen(const char *str);
	size_t		ft_strlcpy(char *dest, const char *src, size_t len);
	size_t		ft_strlcat(char *dest, const char *src, size_t len);
	char		*ft_strchr(const char *s, int c);
	char		*ft_strrchr(const char *s, int c);
	char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
	int			ft_strncmp(const char *s1, const char *s2, size_t n);
	int			ft_atoi(const char *str);
	int			ft_isalpha(int c);
	int			ft_isdigit(int c);
	int			ft_isalnum(int c);
	int 		ft_isascii(int c);
	int			ft_isprint(int c);
	int			ft_toupper(int c);
	int			ft_tolower(int c);
	void		*ft_calloc(size_t count, size_t size);
	char		*ft_strdup(const char *s1);
	char		*ft_substr(char const *s, unsigned int start, size_t len);
	char		*ft_strjoin(char const *s1, char const *s2);
	char		*ft_strtrim(char const *s1, char const *set);
	char		**ft_split(char const *s, char c);	

#endif