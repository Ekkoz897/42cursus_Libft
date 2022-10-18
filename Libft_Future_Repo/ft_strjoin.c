#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i++])
		str[i] = s1[i];
	while (s2[i++])
		str[i] = s2[i];
	str[i] = '\0';
	return (str);
}
