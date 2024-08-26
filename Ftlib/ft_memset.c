/*
#include <stdio.h>
#include <string.h>
char	*ft_memset(void *str, int index, int size, char value);

int	main (void)
{
	char str[] = "Hello little world";
	int	index = 5;
	int	size = 8;
	char	value = '-';
	printf("Original: %s\n", ft_memset(str, index, size, value));
}
*/
char	*ft_memset(void *s, int c, size_t n)
{
	int	i = 0;
	char *ptr = s;
	while (ptr[i] != '\0')
	{
		while (i <= n)
		{
			ptr[i] = c;
			i++;
		}
		i++;
	}
	return (ptr);
}

