/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:55:28 by apereira          #+#    #+#             */
/*   Updated: 2022/08/19 16:08:14 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_word(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2 || argv[1][0] == '\0')
		ft_putchar('\n');
	while (argv[1][i] >= 9 && argv[1][i] <= 13 || argv[1][i] == 32)
		i++;
	while ((argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			|| (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
	{
		ft_putchar(argv[1][i]);
		i++;
	}
}
