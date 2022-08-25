/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   091_union.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:13:40 by apereira          #+#    #+#             */
/*   Updated: 2022/08/25 16:26:52 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checkdoubles1(char *str, char c, int i)
{
	while (str[i])
	{
		i--;
		if (str[i] == c)
			return (1);
	}
	return (0);
}

int	checkdoubles2(char *str, char c, int i)
{
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (checkdoubles1(av[1], av[1][i], i) == 0)
				write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (checkdoubles1(av[2], av[2][i], i) == 0)
				if (checkdoubles2(av[1], av[2][i], i) == 0)
					write(1, &av[2][i], 1);
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
}
