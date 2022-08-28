/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:28:42 by apereira          #+#    #+#             */
/*   Updated: 2022/08/11 22:18:23 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
			temp = tab[i];
			tab[i] = tab[j];
			tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	int	tab[5] = {-333, 1678, -2222, 4, 2};

// 	int i = 0;
// 	ft_sort_int_tab(tab, 5);
// 	while (i < 5)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// }