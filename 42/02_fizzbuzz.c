/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:26:49 by marvin            #+#    #+#             */
/*   Updated: 2022/08/25 11:26:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int nb)
{
	if (nb > 9)
		ft_print_numbers(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int	main(void)
{
	int	nb;

	nb = 1;
	while (nb <= 100)
	{
		if (nb % 3 == 0 && nb % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (nb % 3 == 0)
			write(1, "fizz", 4);
		else if (nb % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_print_numbers(nb);
		write(1, "\n", 1);
		nb++;
	}
}
