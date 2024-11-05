#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	digit;

	nb = n;

	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
		ft_putnbr_fd(nb, fd);
	}
	else if (nb >= 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		digit = nb + '0';
		write(fd, &digit, 1);
	}
}

/*
int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(21043, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1);
}
*/
