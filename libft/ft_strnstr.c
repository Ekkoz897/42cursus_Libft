/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:43:13 by apereira          #+#    #+#             */
/*   Updated: 2022/10/24 12:45:50 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *word, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (word[i] == '\0')
		return ((char *)str);
	while ((i < n) && (str[i] != '\0'))
	{
		j = 0;
		while (str[i + j] == word[j] && ((i + j) < n))
		{
			if (word[j + 1] == '\0')
				return ((char *)&(str[i]));
			j++;
		}
		i++;
	}
	return (0);
}
