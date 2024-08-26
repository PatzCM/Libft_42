int	ft_isalnum(int alpha)
{
	if ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z') || (alpha >= '0' && alpha <= '9'))
		return (1);
	else
		return (0);
}
