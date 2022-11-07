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

static int	count_words(const char *str, char c)
{
	int i;
	int trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s || !(split = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}