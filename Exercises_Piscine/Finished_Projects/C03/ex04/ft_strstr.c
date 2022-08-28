/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 19:57:59 by apereira          #+#    #+#             */
/*   Updated: 2022/08/16 13:57:55 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i2;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		i2 = 0;
		while (str[i + i2] == to_find[i2])
		{
			if (to_find[i2 + 1] == '\0')
				return (str + i);
			i2++;
		}
		i++;
	}
	return (0);
}
