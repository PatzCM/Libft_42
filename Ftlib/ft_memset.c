/*
#include <stdio.h>
#include <string.h>
void	*ft_memset(void *s, int c, size_t n);

int	main (void)
{
	char str[] = "Hello little world";
	int	size = 8;
	char	value = '.';
	printf("Original: %p\n", ft_memset(str, value, size));
	printf("String: %s\n", str);
	printf("Function: %p\n", memset(str, value, size));
}
*/
void	*ft_memset(void *s, int c, size_t n)
{
	int	i = 0;
	char *ptr = s;
	//while (ptr[i] != '\0')
	//{
		while (i <= n)
		{
			ptr[i] = c;
			i++;
		}
	//	i++;
	//}
	return (ptr);
}

