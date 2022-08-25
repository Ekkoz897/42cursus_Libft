/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_revprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:34:44 by marvin            #+#    #+#             */
/*   Updated: 2022/08/25 11:34:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_print_rev(char *str)
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
	ft_print_rev("hi my name is abel");
}