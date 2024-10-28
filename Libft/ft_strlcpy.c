/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <palexand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:23:12 by palexand          #+#    #+#             */
/*   Updated: 2024/10/24 15:23:17 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	size = ft_strlen(src);
	i = 0;
	while (i <= size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
//static int	ft_strlen(char *str)
//{
//	int	i;
//
//	i = 0;
//	while (str[i] != '\0')
//		i++;
//	return (i);
//}
