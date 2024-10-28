/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <palexand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:52:41 by palexand          #+#    #+#             */
/*   Updated: 2024/10/22 17:57:28 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Libft.h"

/*
void	*ft_memchr(const void *s, int c, size_t n);

int	main (void)
{
	char s[]="Oh its not real";
	int	c='i';
	int	n=10;
	printf("Mine%p\n", ft_memchr(s, c, n));
       printf("Original%p\n", memchr(s, c, n));	
}
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	int			i;
	const char	*src;

	src = s;
	i = 0;
	while (i < n)
	{
		if (src[i] == c)
			return ((void *)&src[i]);
		i++;
	}
	return (NULL);
}