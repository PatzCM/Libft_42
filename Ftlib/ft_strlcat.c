unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{	int	i = 0;
	int d = 0;

	while(dest[d] != '\0')
		d++;	

	while (src[i] != '\0')
	{
	dest[d] = src[i];
	d++;
	i++;
	}
	dest[d] = '\0';
}
