#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s1);
	if (!s1 && !s2)
		return (NULL);
	str = malloc(sizeof(char) * (j + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] || s2[i])
	{
		str[i] = s1[i];
		str[j] = s2[i];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
