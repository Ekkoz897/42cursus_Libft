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

// int	ft_words(char const *str, char sep)
// {
// 	int		wd_nbr;

// 	wd_nbr = 0;
// 	while (*str)
// 	{
// 		if (*str != sep)
// 		{
// 			while (*str && *str != sep)
// 				str++;
// 			wd_nbr++;
// 		}
// 		while (*str == sep)
// 			str++;
// 	}
// 	return (wd_nbr);
// }

// int	ft_chars(char const *str, char c)
// {
// 	int	i;
// 	int	counter;

// 	i = 0;
// 	counter = 0;
// 	while (str[i] != c && str[i])
// 	{
// 		counter++;
// 		i++;
// 	}
// 	return (counter);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**g;
// 	size_t	i;
// 	size_t	l;
// 	int		word;
// 	char	*str;

// 	i = 0;
// 	g = (char **)malloc(sizeof(char *) * ft_words(s, c) + 1);
// 	if (!g || !s)
// 		return (NULL);
// 	word = 0;
// 	while (s[i])
// 	{
// 		while (s[i] && s[i] == c)
// 			i++;
// 		if (s[i] != '\0' && s[i] != c)
// 		{
// 			str = (char *)s + i;
// 			l = ft_chars(str, c);
// 			g[word] = ft_substr(s, i, l);
// 			i += l;
// 			word ++;
// 		}
// 	}
// 	g[word] = NULL;
// 	return (g);
// }

static size_t	char_counter(char const *s, char c)
{
	size_t	count;

	if (!s)
		return (0);
	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	char	*str;
	size_t	i;

	dst = (char **)malloc(sizeof(char *) * char_counter(s, c) + 1);
	if (!s || !dst)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			str = (char *)s;
			while (*s && *s != c)
				s++;
			dst[i] = (char *)malloc(s - str + 1);
			if (!dst)
				return (0);
			ft_strlcpy(dst[i++], str, s - str + 1);
		}
		else
			s++;
	}
	dst[i] = 0;
	return (dst);
}