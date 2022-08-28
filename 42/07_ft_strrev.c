/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_ft_strrev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:58:42 by marvin            #+#    #+#             */
/*   Updated: 2022/08/25 11:58:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	temp;

	j = 0;
	i = 0;
	while (str[i])
		i++;
	while(j < i)
	{
		temp = str[j];
		str[j] = str[i - 1];
		str[i - 1] = temp;
		j++;
		i--;
	}
	return (str);
}

int	main(void)
{
	printf("%s", ft_strrev("Ola abel"));
}