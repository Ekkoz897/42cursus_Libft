int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	posneg;

	res = 0;
	i = 0;
	posneg = 1;
	while (str[i])
	{
		while ((str[i] >= 9 && str[i]<= 13) || str[i] == ' ')
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				posneg = -1;
			i++;
		}
		while (str[i] >= '0' && str[i]<= '9')
		{
			res = res * 10 + (str[i] - '0');
			i++;
			if (res > 2147483647)
				return (-1);
			if (res < -2147483648)
				return (0);
		}
		return (res);
	}
}
