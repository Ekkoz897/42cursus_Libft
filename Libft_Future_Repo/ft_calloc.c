#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t	*g;

	g = malloc(size * nmemb);
	if (nmemb == 0 || size == 0)
	{
		g = NULL;
		return (g);
	}
	ft_bzero(g, size * nmemb);
	return (g);
}
