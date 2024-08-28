#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int	ft_atoi (const char *str);
int	main (int argc, char **argv)
{
	if (argc != 0)
	{}
	//char	str=argv[1];
	printf("Mine: %d\n  ", ft_atoi(argv[1]));
	printf("Original:  %d\n  ", atoi(argv[1]));
}
int	ft_atoi (const char *str)
{
	int	i = 0;
	int	nb;
	int	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] <= '9' && str[i] > '0')
	{	
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}
