/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:59:44 by apereira          #+#    #+#             */
/*   Updated: 2022/08/20 20:23:15 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	fucking_fuck(int argc, char **argv, int i)
{
	while (i < argc - 1)
	{
		ft_putstr(argv[i + 1]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		g;

	i = 1;
	while (i < (argc - 1))
	{
		g = 1;
		while (g < argc - 1)
		{
			if (ft_strcmp(argv[g], argv[g + 1]) > 0)
				ft_swap(&argv[g], &argv[g + 1]);
			g++;
		}
		i++;
	}
	i = 0;
	fucking_fuck(argc, argv, i);
}
