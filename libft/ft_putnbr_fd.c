#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char	*str;
	size_t	i;

	str = ft_itoa(n);
	i = 0;
	while (str[i])
	{
		write(fd, str[i], 1);
		i++;
	}
}
