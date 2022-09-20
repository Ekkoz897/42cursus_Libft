#include "libft.h"

void *memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*destino;

	i = 0;
	source = (unsigned char *)src;
	destino = (unsigned char *)dest;
	if (!destino & !source)
		retun (0);
	if (source > destino)
	{
		while (i > 0)
		{
			i = n;
			destino[i] = source[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			destino[i] = source[i];
			i++;
		}
	}
	return (dest);
}
