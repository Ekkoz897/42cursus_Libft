/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:15:43 by apereira          #+#    #+#             */
/*   Updated: 2022/08/15 21:45:42 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				i2;

	i2 = 0;
	i = 0;
	while (dest[i2] != '\0')
		i2++;
	while (src[i] && (i < nb))
	{
		dest[i2] = src[i];
		i2++;
		i++;
	}
	dest[i2] = '\0';
	return (dest);
}
