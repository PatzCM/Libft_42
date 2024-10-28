/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <palexand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:11:55 by palexand          #+#    #+#             */
/*   Updated: 2024/10/28 16:11:55 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

static int	ft_countwords(char *s);

char	**ft_split(char const *s, char c)
{
	int		i;
	int		b;
	int		start;
	char	**substring;
	int	length;

	i = 0;
	b = 0;
	while (s[i] = c)
		i++;
	start = i;
	length = ft_countwords((char *)s);
	while (s[i] < ft_strlen((char *)s))
	{
		while (s[i] != c)
			i++;
		substring[b] = ft_substr(s, start, i-1);
		while (s[i] = c)
			i++;
		while (s[i] != c)
			i++;
		b++;
		substring[b] = ft_substr(s, i, (i - ft_strlen(substring[b-1])));
		if (s[i+1] == '\0')
			return (substring);
	}
}

static int	ft_countwords(char *s)
{
	int	i;
	
	i = 0;
	

}
int	main(void)
{

}
