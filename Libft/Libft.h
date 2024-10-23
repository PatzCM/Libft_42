/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <palexand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:39:00 by palexand          #+#    #+#             */
/*   Updated: 2024/10/23 17:39:00 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <bsd/string.h>


void	*ft_memchr(const void *s, int c, size_t n);
int	ft_atoi(const char *str);
char	*ft_bzero(char *str, int s, int n);
int	ft_isalnum(int alpha);
int	ft_isalpha(char c);
int	ft_isascii(int c);
int	ft_isdigit(int a);

#endif

