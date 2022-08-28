/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:49:54 by apereira          #+#    #+#             */
/*   Updated: 2022/08/24 17:44:27 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		j;
	int		h;

	res = malloc(sizeof(strs));
	i = 0;
	h = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			res[h++] = strs[i][j++];
		j = 0;
		while (sep[j])
		{
			if (i < size - 1)
				res[h++] = sep[j];
			else
				res[h] = '\0';
			j++;
		}
		i++;
	}
	return (res);
}

// char	*ft_strjoin(int size, char **strs, char *sep);

// int		main(void)
// {
// 	int		offset;
// 	char	**strs;
// 	char	*res_str;

// 	strs = malloc(3 * sizeof(char *));
// 	if (strs == NULL)
// 		return (1);
// 	offset = 0;
// 	while (offset < 3)
// 	{
// 		strs[offset] = "abc";
// 		offset++;
// 	}
// 	res_str = ft_strjoin(3, strs, ", ");
// 	if (res_str == NULL)
// 		return (1);
// 	printf("res: %s\n", res_str);
// 	free(strs);
// 	free(res_str);
// 	return (0);
// }