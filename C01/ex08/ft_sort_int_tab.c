/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:43:02 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/09 13:09:11 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_int_tab(int *tab, int size)
{
	int	tempmax;
	int	counter;
	
	counter = 0;
	while(counter < size)
	{
		int	c2;

		c2 = counter;
		while (c2 < size)
		{
			if (tab[c2] > tab[c2+1])
			{
				tab[c2] += tab[c2+1];
				tab[c2+1] = tab[c2] - tab[c2+1];
				tab[c2] = tab[c2] - tab[c2+1];
			}
			c2++;
		}
		counter++;
	}
}