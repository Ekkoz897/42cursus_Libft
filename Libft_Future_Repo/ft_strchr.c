#include "libft.h"

char *strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (&str[i]);
	i = strlen(i);
	if ( c == '\0')
		return (&str[i]);
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
