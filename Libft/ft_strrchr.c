#include <stdio.h>
char	*ft_strrchr(const char *s, int c);
int	main (void)
{
	const char s[]="Hello world";
	int	c = 'o';
	printf("%s", ft_strrchr(s, c));
}
char	*ft_strrchr(const char *s, int c)
{
	int	b = 0;
	int	i = 0;
	
	while (s[b] != '\0')
	{
		if (s[b] == c)
			i = b;
		b++;
	}
	return((char *)&s[i]);
}
