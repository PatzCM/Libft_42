/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <palexand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:09:25 by palexand          #+#    #+#             */
/*   Updated: 2024/10/22 18:35:36 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	ft_strlen(const char *str);
/*
void	*ft_memcpy(void *dest_str, const void * src_str, size_t n);

int	main (void)
{
	
	char src_str[]="Soon in Common Core";
	size_t n = ft_strlen(src_str);
	char dest_str[n];
	printf("%p", ft_memcpy(src_str, dest_str, n));
}
*/

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	char		*dest;
	const char	*src;
	int			i;

	dest = (char *)dest_str;
	src = (const char *)src_str;
	n = ft_strlen(src);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
