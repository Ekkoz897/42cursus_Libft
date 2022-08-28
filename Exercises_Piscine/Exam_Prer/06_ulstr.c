/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:49:49 by apereira          #+#    #+#             */
/*   Updated: 2022/08/24 15:28:19 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ulstr(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		write(1, '\n', 1);
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			argv[1][i] -= 32;
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			argv[1][i] += 32;
		i++;
	}
	write(1, '\n', 1);
}
