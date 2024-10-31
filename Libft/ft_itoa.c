#include "Libft.h"

char	*ft_itoa(int n)
{
	int	i;
	char	*str;
	char	sign;

	i = 0;
	if (n == 0)
		return (NULL);
	if (n < 0)
	{
		sign = '-';
		n *= -1;
	}
	str=malloc(sizeof(char) * n);
	if (str == NULL)
		return (NULL);if (n > 9)
	if (n > 9)
	{
		ft_itoa(n/ 10);
		n = n % 10;
		str[i] = n;
		i++;
	}
return (str);
}

int	main(int argc, char **argv)
{
	int	i = 0;
	if (argc < 0)
		return ('\0');
	while (&argv[1][i] != (char *)'\0')
	{
		printf("%i\n", *ft_itoa(atoi(&argv[1][i])));
		i++;
	}
}
