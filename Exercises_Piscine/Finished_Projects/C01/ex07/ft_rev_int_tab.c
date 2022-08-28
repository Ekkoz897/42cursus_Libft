/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:41:59 by apereira          #+#    #+#             */
/*   Updated: 2022/08/11 22:11:54 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

// int	main(void)
// {
// 	int	tab[5] = {1, 2, 3, 4, 5};
// 	int i = 0;

// 	ft_rev_int_tab(tab, 5);
// 	while (i < 5)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// }
