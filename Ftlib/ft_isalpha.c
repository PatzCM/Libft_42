/*
#include <stdio.h>
#include <ctype.h>
int	ft_isalpha (char c);
int	main (void)
{
	char c = 'B';
	printf("Original:%i\n", isalpha('b'));
	printf("%i", ft_isalpha(c));
}
*/
int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
	else
		return (0);
}
