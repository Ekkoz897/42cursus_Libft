/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:43:16 by apereira          #+#    #+#             */
/*   Updated: 2022/10/24 12:46:21 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*sub;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	sub = malloc(sizeof(char) * ft_strlen(s));
	while (i < start)
		i++;
	j = 0;
	while (s[i++] && len > 0)
	{
		sub[j] = s[i];
		len--;
		j++;
	}
	sub[j] = '\0';
	return (sub);
}
