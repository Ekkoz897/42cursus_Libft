/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:43:14 by apereira          #+#    #+#             */
/*   Updated: 2022/10/24 12:46:11 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	if (c == '\0')
		return ((char *)str + (ft_strlen(str) + 1));
	i = 0;
	if (str[i] == '\0')
		return (NULL);
	i = ft_strlen(str);
	while (str[i] != c)
	{
		i--;
		if (str[i] == c)
			return ((char *)str + i);
	}
	return (NULL);
}
