#include "libft.h"

char *strdup(const char *s)
{
	char	*g;
	int		i;

	i = 0;
	g = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (g == NULL)
		return (NULL);
	while (s[i])
		g[i++] = s[i];
	g[i] = '\0';
	return (g);
}
