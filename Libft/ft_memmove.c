/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <palexand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:46:17 by palexand          #+#    #+#             */
/*   Updated: 2024/10/21 15:46:19 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
/*
void	*ft_memmove(void *dest, const void *src, size_t n);
int	main (void)
{
	char	dest[]="";
	const char src[]="Hello";
	size_t n = 5;
	ft_memmove(dest, src, n);
}
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	char		*destino;
	const char	*srce;

	destino = dest;
	srce = src;
	while (i < n)
		i = 0;
	{
		destino[i] = srce[i];
		i++;
	}
	return (dest);
}
