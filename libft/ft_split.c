/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:45:56 by apereira          #+#    #+#             */
/*   Updated: 2022/11/01 17:14:21 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It splits a string into words.
 * 
 */

int	ft_words(char const *str, char sep)
{
	int		wd_nbr;

	wd_nbr = 0;
	while (*str)
	{
		if (*str != sep)
		{
			while (*str && *str != sep)
				str++;
			wd_nbr++;
		}
		while (*str == sep)
			str++;
	}
	return (wd_nbr);
}

int	ft_chars(char const *str, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i] != c && str[i])
	{
		counter++;
		i++;
	}
	return (counter);
}

char	**ft_copia(char const *s, char c, size_t i, char **g)
{
	int		l;
	int		word;
	char	*str;

	word = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		str = (char *)s + i;
		l = ft_chars(str, c);
		g[word] = ft_substr(s, i, l);
		i += l;
		word ++;
	}
	g[word] = NULL;
	return (g);
}

char	**ft_split(char const *s, char c)
{
	char	**g;
	size_t	i;

	i = 0;
	g = (char **)malloc(sizeof(char *) * ft_words(s, c) + 1);
	if (!g || !s)
		return (NULL);
	ft_copia (s, c, i, g);
	return (g);
}
