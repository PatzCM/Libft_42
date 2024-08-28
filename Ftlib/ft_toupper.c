#include <unistd.h>
/*
#include <stdio.h>
int		ft_toupper(int ch);
void	ft_putchar(char ch);
int main (void)
{
int		ch = '5';
printf("%c", ft_toupper(ch));
}
*/
int		ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		ft_putchar(ch -= 32);
	else
		return (ch);

}
void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}
