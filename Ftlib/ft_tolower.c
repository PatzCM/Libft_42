/*
#include <stdio.h>
int		ft_tolower(int c);
int	main (void)
{
	int	c = 'G';
	printf("%c", ft_tolower(c));
}
*/
int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return(c + 32);
	else
		return(c);
}
