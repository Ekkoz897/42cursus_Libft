/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:09:59 by apereira          #+#    #+#             */
/*   Updated: 2022/08/18 15:53:26 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	check_base( char *base)
{
	unsigned int	i;
	unsigned int	g;

	i = 0;
	while (base[i])
	{
		g = i + 1;
		while (base[g])
		{
			if (base[i] == base[g])
				return (0);
			g++;
		}
		if (base[i] == '\0' || g < 2)
			return (0);
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
			return (0);
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	numb;

	if (check_base(base) != '\0')
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			numb = (nbr * -1);
		}
		else
			numb = nbr;
		if (numb < check_base(base))
			ft_putchar(base[nbr]);
		else
		{
			ft_putnbr_base((numb / check_base(base)), base);
			ft_putnbr_base((numb % check_base(base)), base);
		}
	}
}
