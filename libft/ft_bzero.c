/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:42:06 by apereira          #+#    #+#             */
/*   Updated: 2022/10/24 11:47:47 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It sets the first n bytes of the memory area pointed to by str to zero.
 * 
 *  str - pointer to the memory area to be filled.
 *  n   - number of bytes to be zeroed.
 */

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*str1;

	i = 0;
	str1 = (unsigned char *)str;
	while (i < n)
		str1[i++] = 0;
}
