#include "libft.h"

char *strnstr(const char *str, const char *word, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (word[i] == '\0')
		return ((char *)str);
	while ((i < n) && (str[i] != '\0'))
	{
		j = 0;
		while (str[i + j] == word[j] && ((i + j) < n))
		{
			if (word[j + 1] == '\0')
				return ((char *)&(str[i]));
			j++;
		}
		i++;
	}
	return (0);
}
