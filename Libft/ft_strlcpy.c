/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <palexand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:51:10 by palexand          #+#    #+#             */
/*   Updated: 2024/10/21 15:52:36 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	size = ft_strlen(src);
	int	i = 0;
	while (i <= size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
static int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}
