/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:42:39 by apereira          #+#    #+#             */
/*   Updated: 2022/10/24 12:45:19 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*destino;

	i = 0;
	source = (unsigned char *)src;
	destino = (unsigned char *)dest;
	if (!destino & !source)
		return (0);
	if (source > destino)
	{
		while (i-- > 0)
		{
			i = n;
			destino[i] = source[i];
		}
	}
	else
	{
		while (i++ < n)
			destino[i] = source[i];
	}
	return (dest);
}
