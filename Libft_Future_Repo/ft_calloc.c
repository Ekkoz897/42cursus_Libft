#include "libft.h"

void *calloc(size_t nmemb, size_t size)
{
	size_t	*g;
	int	i;

	g = malloc(size * nmemb);
	i = 0;
	if (nmemb == 0 || size == 0)
	{
		g = NULL;
		return (g);
	}
	ft_bzero(g, size * nmemb);
	return (g);
}
