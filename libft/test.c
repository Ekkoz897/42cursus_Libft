int	ft_chars(char const *str, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i] != c && str[i])
	{
		counter++;
		i++;
	}
	return (counter);
}


#include <stdio.h>
int	main()
{
	char const	*str;
	char		sep;

	str = "john bellion";
	sep = ' ';
	printf("%i\n", ft_chars(str, sep));
}