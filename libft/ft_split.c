/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:45:56 by apereira          #+#    #+#             */
/*   Updated: 2022/10/27 12:37:13 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It splits a string into words.
 * 
 * c - separator
 *
 */
int	ft_conta(char *str, char c, int *i)
{
	int	j;

	j = 0;
	while (str[*i])
	{
		while (str[*i] != c)
			i++;
		while (str[*i] == c)
			i++;
		j++;
	}
	return (j);
}

void	ft_copia(char *str, int i, char c, char **g)
{
	int	l;
	int	k;
	int	j;

	j = ft_conta(str, c, &i);
	l = 0;
	i = 0;
	k = 0;
	while (j > 0)
	{
		while (str[i] == c)
			i++;
		l = 0;
		while (str[i++] != c)
			l++;
		i -= l;
		g[j] = malloc(sizeof(char) * l);
		while (k <= l)
		{
			g[j][k] = str[i];
			i++;
			k++;
		}
		j--;
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**g;
	char	*g1;

	i = 0;
	g1 = (char *)s;
	g = malloc(sizeof(g1));
	ft_copia(g1, i, c, g);
	return (g);
}
