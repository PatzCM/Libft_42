#include <stdio.h>
#include <stddef.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	main (void)
{
char s1[] = "Helloa";
char s2[] = "Helloi";
int	n = 4;
printf("%i", ft_strncmp(s1, s2, n));
}
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int 	i = 0;
	int	b = 0;
	while (i <= n)
	{
		if (s1[i] == s2[b])
		{
			i++;
			b++;
		}
		else
			return(s1[i] - s2[b]);
	}
	return(s1[i] - s2[b]);
}
