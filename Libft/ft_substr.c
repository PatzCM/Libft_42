/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <palexand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:18:24 by palexand          #+#    #+#             */
/*   Updated: 2024/10/24 16:18:24 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		nb;
	int		temp;
	char	*sub;

	i = 0;
	temp = len;
	nb = start;
	sub = malloc(len);
	if (sub == NULL)
		return (NULL);
	while (i <= temp || s[nb] == '\0')
	{
		sub[i] = s[nb];
		nb++;
		i++;
	}
	return (sub);
}
/*
int	main (void)
{
	char str[]= "Hello world!";
	int	start = 4;
	size_t length = 9;
	// ft_substr(str, start, length);
	printf("%s\n", ft_substr(str,start, length));
}
*/
