/*
#include <stdio.h>
char	*ft_bzero(char *str, int s, int n);
int	main (void)
{
	char	str[]="Hello world!";
	int	s = 3;
	int	n = 5;
	printf("%s", ft_bzero(str, s, n));
}
*/
void	*ft_bzero(char *str, int s, int n)
{
	int	i = 0;
	while (str[i] != '\0')
	{
		while (i >= s && i <= n)
		{
			str[i] = '\0';
			i++;
		}
	i++;
	}
}
