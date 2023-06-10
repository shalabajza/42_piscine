/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:49:17 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/09 13:09:05 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	c1;
	int	c2;

	c1 = 0;
	c2 = size - 1;
	while (c2 > c1)
	{
		tab[c2] += tab[c1];
		tab[c1] = tab[c2] - tab[c1];
		tab[c2] = tab[c2] - tab[c1];
		c1++;
		c2--;
	}
}

/*
#include <stdio.h>

int	main(void) 
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	size = sizeof(arr) / sizeof(arr[0]);

	ft_rev_int_tab(arr, size);
	
	for (int i = 0; i < size; i++) 
	{
		printf("%d ", arr[i]);
    	}

	return (0);
	}
*/