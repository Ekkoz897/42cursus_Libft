#include "libft.h"

/**
 * Write the string s to the file descriptor fd
 * 
 * @param s The string to output.
 * @param fd file descriptor
 * 
 * @return the number of characters written.
 */

void ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s || fd < 0)
		return ;
	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
}
