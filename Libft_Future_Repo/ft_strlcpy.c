#include "libft.h"

int	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (dest[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	src[] = " Abelaaaaaaaaaaaaaa";
// 	char	dest[] = "Sou o";
// 	printf("%d", ft_strlcpy(dest, src, 0));
// }