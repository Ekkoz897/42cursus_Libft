/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:42:01 by apereira          #+#    #+#             */
/*   Updated: 2022/10/24 11:47:30 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Long because couldn't compile with int, said condition is always false

int	ft_atoi(const char *str)
{
	long long	res;
	int			i;
	int			posneg;

	res = 0;
	i = 0;
	posneg = 1;
	while (str[i])
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		while (str[i++] == '-' || str[i++] == '+')
			if (str[i] == '-')
				posneg = -1;
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + (str[i] - '0');
			i++;
			if (res > 2147483647)
				return (-1);
			if (res < -2147483648)
				return (0);
		}
	}
	return (res * posneg);
}
