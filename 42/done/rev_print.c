/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 23:42:26 by marvin            #+#    #+#             */
/*   Updated: 2022/08/23 23:42:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (str[i - 1])
	{
		write(1, &str[i - 1], 1);
		i--;
	}
	return (str);
}

int	main(void)
{
	ft_rev_print("abcde");
	return (0);
}
