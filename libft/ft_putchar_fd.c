/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:02:19 by apereira          #+#    #+#             */
/*   Updated: 2022/11/09 15:15:36 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Ft_putchar_fd() writes a character to a file descriptor
 * 
 * @param c the character to print
 * @param fd file descriptor
 */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
