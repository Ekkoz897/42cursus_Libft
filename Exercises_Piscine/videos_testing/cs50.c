/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs50.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:25:39 by apereira          #+#    #+#             */
/*   Updated: 2022/08/18 22:14:57 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c)
{
	write(1, c, 1);
}

void j(char *i, int n)
{
	
	if (n == 0)
	{
		return;	
	}
	ft_putchar(str[i]);
	j(i, --n);
}

int	main()
{
	j("a", 3);
}