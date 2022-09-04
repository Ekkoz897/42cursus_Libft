
int	ft_isprint(int c)
{
	if (c < ' ' || c == 127)
		return (0);
	return (1);
}
