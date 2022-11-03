/**
 * Ft_putchar_fd() writes a character to a file descriptor
 * 
 * @param c the character to print
 * @param fd file descriptor
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
