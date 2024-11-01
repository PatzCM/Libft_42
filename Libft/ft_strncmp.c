/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <palexand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:30:10 by palexand          #+#    #+#             */
/*   Updated: 2024/10/24 16:30:23 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	main (void)
{
char s1[] = "Helloa";
char s2[] = "Helloi";
int	n = 4;
printf("%i", ft_strncmp(s1, s2, n));
}*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	while (i <= n)
	{
		if (s1[i] == s2[b])
		{
			i++;
			b++;
		}
		else
			return (s1[i] - s2[b]);
	}
	return (s1[i] - s2[b]);
}
