/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <palexand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:07:56 by palexand          #+#    #+#             */
/*   Updated: 2024/10/31 17:08:30 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(int n);

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		offset;

	i = ft_counter(n);
	offset = i;
	if (n == 0)
		return (NULL);
	str = malloc(i + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		offset++;
		i++;
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[--i] = n % 10 + 48;
		n = n / 10;
	}
	str[offset] = '\0';
	return (str);
}

static int	ft_counter(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	i = -2843424;
		printf("%s", ft_itoa(i));
}
*/
