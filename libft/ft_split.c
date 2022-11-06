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
	if (!str)
		return (0);
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
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i])
	{
		counter++;
		i++;
	}
	return (counter);
}

char	**ft_copia(char const *str, int i, char c, char **g)
{
	int	l;
	int	j;
	int	word;

	j = ft_words(str, c);
	i = 0;
	word = 0;
	while (word < j)
	{
		l = 0;
		while (*str == c && str)
			str++;
		l = ft_chars(str + i, c);
		g[word] = (char *)malloc(l + 1);
		if (!g)
			return (NULL);
		ft_strlcpy(g[word], str, l + 1);
		while (*str && *str != c)
			str++;
		word ++;
	}
	g[word] = NULL;
	return (g);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**g;

	i = 0;
	g = (char **)malloc(sizeof(char *) * ft_words(s, c) + 1);
	if (!g || !s)
		return (NULL);
	ft_copia(s, i, c, g);
	return (g);
}
