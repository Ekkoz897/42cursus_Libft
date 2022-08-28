/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:53:25 by apereira          #+#    #+#             */
/*   Updated: 2022/08/18 18:59:08 by apereira         ###   ########.fr       */
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

	i = argc - 1;
	g = 0;
	while (i > 0)
	{
		while (argv[i][g])
		{
			ft_putchar(argv[i][g]);
			g++;
		}
		write(1, "\n", 1);
		i--;
		g = 0;
	}
}
