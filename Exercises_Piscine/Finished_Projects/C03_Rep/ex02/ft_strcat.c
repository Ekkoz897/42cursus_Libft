/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:15:14 by apereira          #+#    #+#             */
/*   Updated: 2022/08/16 13:55:37 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i2;

	i2 = 0;
	while (dest[i2] != '\0')
	{
		i2++;
	}
	i = 0;
	while (src[i])
	{
		dest[i2] = src[i];
		i2++;
		i++;
	}
	dest[i2] = '\0';
	return (dest);
}
