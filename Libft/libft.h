/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <palexand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:39:00 by palexand          #+#    #+#             */
/*   Updated: 2024/10/24 16:04:28 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <bsd/string.h>
# include <strings.h>

char					*ft_strdup(const char *s);
char					*ft_substr(char const *s, unsigned int start, \
							size_t len);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_atoi(const char *str);
void					ft_bzero(void *s, size_t n);
int						ft_isalnum(int alpha);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_isdigit(int a);
size_t					ft_strlen(const char *s);
size_t					ft_strlcat(char *dest, char *src, size_t size);
unsigned int			ft_strlcpy(char *dest, char *src, unsigned int size);
char					*ft_strrchr(const char *s, int c);
int						ft_tolower(int c);
int						ft_toupper(int ch);
char					*ft_substr(char const *s, unsigned int start, \
										size_t len);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
char					*ft_strjoin(char *s1, char *s2);
char					*ft_strtrim(char const *s1, char const *set);
void					*ft_calloc(size_t nmemb, size_t size);
char					*ft_strchr(const char *s, int c);
char					**ft_split(char const *s, char c);
char					*ft_itoa(int n);

#endif
