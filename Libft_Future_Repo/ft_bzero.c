#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t 			i;
	unsigned char	*str1;

	i = 0;
	str1 = (unsigned char *)str;
	while (i < n)
		str1[i++] = 0;
}
