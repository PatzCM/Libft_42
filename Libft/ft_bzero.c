/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <palexand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:07:44 by palexand          #+#    #+#             */
/*   Updated: 2024/10/21 15:07:46 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
char	*ft_bzero(char *str, int s, int n);
int	main (void)
{
	char	str[]="Hello world!";
	int	s = 3;
	int	n = 5;
	printf("%s", ft_bzero(str, s, n));
}
*/
void	*ft_bzero(char *str, int s, int n)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (i >= s && i <= n)
		{
			str[i] = '\0';
			i++;
		}
		i++;
	}
}
