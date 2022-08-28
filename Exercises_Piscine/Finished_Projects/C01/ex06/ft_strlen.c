/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 23:39:44 by apereira          #+#    #+#             */
/*   Updated: 2022/08/11 22:11:51 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

// int	main(void)
// {
// 	int	size;
// 	char	*t = "Aaaaaaaaaaaa";

// 	size = ft_strlen(t);
// 	printf("%d", size);
// }
