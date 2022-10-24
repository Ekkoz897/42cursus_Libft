/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:43:15 by apereira          #+#    #+#             */
/*   Updated: 2022/10/24 12:46:17 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		j;

	i = -1;
	j = 0;
	result = malloc(sizeof(char) * ft_strlen(s1));
	while (s1[i])
	{
		i++;
		if (s1[i] != set[j])
			result[i++] = s1[i];
		j++;
	}
	return (result);
}
