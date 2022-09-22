#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*sub;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	sub = malloc(sizeof(char) * ft_strlen(s));
	while (i < start)
		i++;
	j = 0;
	while (s[i++] && len > 0)
	{
		sub[j] = s[i];
		len--;
		j++;
	}
	sub[j] = '\0';
	return (sub);
}
