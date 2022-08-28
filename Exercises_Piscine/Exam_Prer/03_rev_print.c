/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:50:43 by apereira          #+#    #+#             */
/*   Updated: 2022/08/25 19:40:46 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i > 0)
	{
		ft_putchar(str[i - 1]);
		i--;
	}
}

int	main(void)
{
	rev_print("abcde");
}