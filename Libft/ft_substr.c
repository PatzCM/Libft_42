#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int	i;
	int	nb;
	int	temp;
	char	*sub;
	
	i = 0;
	temp = len;
	nb = start;
	sub = malloc(len);
	if (sub == NULL)
		return NULL;
	while (i <= temp || s[nb] == '\0')
	{
		sub[i] = s[nb];
		nb++;
		i++;
	}
	free (sub);
	return (sub);
}

int	main (void)
{
	char str[]= "Hello world!";
	int	start = 4;
	size_t length = 9;
	// ft_substr(str, start, length);
	printf("%s\n", ft_substr(str,start, length));
}
