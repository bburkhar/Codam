/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bburkhar <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 12:32:46 by bburkhar       #+#    #+#                */
/*   Updated: 2019/11/08 10:18:37 by bruno         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
	int			ft_atoi(const char *str);
	void		ft_bzero(void *s, size_t n);
	void		*ft_calloc(size_t count, size_t size);
	int			ft_isalnum(int c);
	int			ft_isalpha(int c);
	void		*ft_memchr(const void *s, int c, size_t n);
#endif
