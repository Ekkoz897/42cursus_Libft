/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_ft_range.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:28:15 by apereira          #+#    #+#             */
/*   Updated: 2022/08/25 20:03:38 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int i;
	int range;
	int *dest;

	range = end - start;
	if (range < 0)
		range *= -1;
	dest = malloc(sizeof(int) * (range + 1));
	if (range == 0)
		dest[0] = start;
	if (start > end)
	{
		i = 0;
		while (i <= range)
			dest[i++] = start--; 
		return(dest); 
	}
	if (start < end)
	{
		i = 0;
		while (i <= range)
			dest[i++] = start++;  
		return(dest);
	}		
}

int	main(void)
{
	int *tab;
	int i = 0;
	int start = 0;
	int end = -2 ;
	int size = ft_abs(end - start) + 1;

	tab = ft_range(start, end);
	while(i < size)
	{
	printf("%i, ", tab[i]);
	i++;
	}
}