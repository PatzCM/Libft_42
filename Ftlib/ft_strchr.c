#include <stdio.h>
char	*ft_strchr (const char *s, int c);
int	main (void)
{	
	const char	s[]="Hello world";
	int	c = 'o';
	printf("%s", ft_strchr(s, c));
}
char	*ft_strchr (const char *s, int c)
{
	int	i;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return((char*)&s[i]);
	i++;
	}
	if ( c == '\0')
		return ((char *)&s[i]);
	return NULL;
}
