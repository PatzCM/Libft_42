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

static int	ft_countwords(char *s, char c);

char	**ft_split(char const *s, char c)
{
	int		i;
	int		b;
	int		start;
	char	**substring;
	int	length;
	
	length = ft_countwords((char *)s, c);
	substring = malloc((length + 1) *sizeof(char *));
	if (substring == NULL)
		return (NULL);
	i = 0;
	b = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (start < i)
		{
			substring[b] = ft_substr(s, start, i - start);
				if (substring[b] != NULL)
					b++;;
		}
	}
	substring[b] = NULL;
	return (substring);
}

static int	ft_countwords(char *s, char c)
{
	int	i;
	int	words;
	
	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i-1] == c))
				words++;
		i++;
	}	
	return (words);
}

int	main(void)
{
	char	str[] = "This is just a test";
	char	sep = 'i';
	printf("%s, \n", *ft_split(str, sep));
}
