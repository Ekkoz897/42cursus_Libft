/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 01:14:31 by apereira          #+#    #+#             */
/*   Updated: 2022/08/21 15:50:10 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	k;

	i = 1;
	k = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb == 0)
		return (0);
	while (i < power)
	{
		nb *= k;
		i++;
	}
	return (nb);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_power(0, 0));
// }