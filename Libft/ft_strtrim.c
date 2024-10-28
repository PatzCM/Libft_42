/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <palexand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:23:36 by palexand          #+#    #+#             */
/*   Updated: 2024/10/24 21:58:23 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		size;
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	size = ft_strlen((char *)s1);
	while (s1[i] == set[0])
		i++;
	while (s1[size - 1] == set[0])
		size--;
	str = malloc(sizeof(char) * ((size - 1) - i));
	if (str == NULL)
		return (NULL);
	while (i <= size -1)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
/*
int	main(void)
{
	char s1[] = "       this string has    ...   lots of spaces!      ";
	char set[] = " ";
	printf("%s\n", ft_strtrim(s1, set));
}
*/
