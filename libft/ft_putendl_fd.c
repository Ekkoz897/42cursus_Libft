#include "libft.h"

/**
 * Write the string s to the file descriptor fd, followed by a newline
 * 
 * @param s The string to output.
 * @param fd file descriptor
 * 
 * @return nothing.
 */

void ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	if (!s || fd < 0)
		return ;
	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
	write(fd, "\n", 1);
}
