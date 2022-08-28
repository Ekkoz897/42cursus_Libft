/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:04:40 by apereira          #+#    #+#             */
/*   Updated: 2022/08/23 17:04:03 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*c;
	int		i;

	i = 0;
	c = malloc(sizeof(src) + 1);
	if (c == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *str);

int		main(void)
{
	char	*str;
	char	*str_copy;

	str = "Test string.";
	str_copy = ft_strdup(str);
	if (strcmp(str, str_copy) != 0)
		printf("KO, string is not the same.\n");
	else
		printf("OK.\n");
	str = "";
	str_copy = ft_strdup(str);
	if (strcmp(str, str_copy) != 0)
		printf("KO, string is not the same.\n");
	else
		printf("OK.\n");
	str = "eeeeeeee vida de gado";
	str_copy = ft_strdup(str);
	if (strcmp(str, str_copy) != 0)
		printf("KO, string is not the same.\n");
	else
		printf("OK.\n");
	return (0);
}