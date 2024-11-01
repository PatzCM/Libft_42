/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <palexand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:24:49 by palexand          #+#    #+#             */
/*   Updated: 2024/10/24 15:24:49 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
int	main(void)
{
	const char s[]="Hello world";
	int	c = 'o';
	printf("%s", ft_strrchr(s, c));
}
*/

char	*ft_strrchr(const char *s, int c)
{
	int	b;
	int	i;

	i = 0;
	b = 0;
	while (s[b] != '\0')
	{
		if (s[b] == c)
			i = b;
		b++;
	}
	return ((char *)&s[i]);
}
