unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}
size_t	ft_strlcat(char *dest, char *src, size_t size)
{	
	int	i;
	int d;
	int s;

	i = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size == 0 || size <= d)
		return (s + size);
	while (src[i] != '\0' && i < (size - d - 1))
	{
	dest[d + i] = src[i];
	i++;
	}
	dest[d + i] = '\0';
	return(s + d);
}
