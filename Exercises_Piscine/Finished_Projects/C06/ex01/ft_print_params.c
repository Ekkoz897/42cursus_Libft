/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:39:59 by apereira          #+#    #+#             */
/*   Updated: 2022/08/18 18:53:07 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	g;

	i = 1;
	g = 0;
	while (i < argc)
	{
		while (argv[i][g])
		{
			ft_putchar(argv[i][g]);
			g++;
		}
		write(1, "\n", 1);
		i = i + 1;
		g = 0;
	}
}
