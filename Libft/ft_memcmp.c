/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <palexand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:00:10 by palexand          #+#    #+#             */
/*   Updated: 2024/10/22 18:08:56 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int			i;
	const char	*str1;
	const char	*str2;

	str1 = (const char *)s1;
	str2 = (const char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] - str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (*str1 - *str2);
}
