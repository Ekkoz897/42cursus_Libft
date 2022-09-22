#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	int	i;

	if ( c == '\0')
		return ((char *)str + (ft_strlen(str) + 1));
	i = 0;
	if (str[i] == '\0')
		return (NULL);
	i = ft_strlen(str);
	while (str[i] != c)
	{
		i--;
		if (str[i] == c)
			return ((char *)str + i);
	}
	return (NULL);
}
