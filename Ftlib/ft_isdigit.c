/*
#include <stdio.h>
#include <ctype.h>
int	ft_isdigit (int a);

int	main (void)
{
int	a = '-';
printf("original:%i\n", isdigit(a));
printf("mine:%i\n", ft_isdigit(a));
}
*/
int	ft_isdigit (int a)
{
	if (a >= '0' && a <= '9')
		return (a);
	else
		return (0);
}

