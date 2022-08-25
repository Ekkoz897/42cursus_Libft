/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 22:19:28 by apereira          #+#    #+#             */
/*   Updated: 2022/08/09 21:45:05 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_help(char u, char d, char c)
{
	char	comma;
	char	space;

	c = c + '0';
	d = d + '0';
	u = u + '0';
	comma = 44;
	space = 32;
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (u != 57 || d != 56 || c != 55)
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb(void)
{
	int	u;
	int	d;
	int	c;

	u = 0;
	d = 0;
	c = 0;
	while (c <= 7)
	{
		d = c + 1;
		while (d <= 8)
		{
			u = d + 1;
			while (u <= 9)
			{
				ft_help(u, d, c);
				u++;
			}
			d++;
		}
		c++;
	}
}
