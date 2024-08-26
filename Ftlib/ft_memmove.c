/*
#include <stddef.h>
void	*ft_memmove(void *dest, const void *src, size_t n);
int	main (void)
{
	char	dest[]="";
	const char src[]="Hello";
	size_t n = 5;
	ft_memmove(dest, src, n);
}
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
int	i = 0;
char *destino = dest;
const char *srce = src;
	while (i < n)
	{
		destino[i] = srce[i];
		i++;		
	}
}
