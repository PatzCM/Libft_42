#include <stdio.h>
#include <string.h>
#include <stddef.h>

void	*ft_memchr (const void *s, int c, size_t n);
int	main (void)
{
	char s[]="Oh its not real";
	int	c='i';
	int	n=10;
	printf("Mine%p\n", ft_memchr(s, c, n));
       printf("Original%p\n", memchr(s, c, n));	
}
void	*ft_memchr (const void *s, int c, size_t n)
{
	int	i = 0;
	const char	*src = s;
	while ( i < n )
	{
		if (src[i] == c)
			return((void *)&src[i]);

		i++;
	}
	return NULL;
}
