#include "libft.h"

char *strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (&str[i]);
	i = strlen(i);
	if ( c == '\0')
		return (&str[i]);
	while (str[i] != c)
	{
		i--;
		if (str[i] == c)
			return (&str[i]);
	}
	return (NULL);
}
