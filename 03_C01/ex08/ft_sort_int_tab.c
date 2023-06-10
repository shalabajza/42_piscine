/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:43:02 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/10 17:09:38 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	c2;

	counter = 0;
	while (counter < size)
	{
		c2 = 0;
		while (c2 < size - 1)
		{
			if (tab[c2] > tab[c2 + 1])
			{
				tab[c2] += tab[c2 + 1];
				tab[c2 + 1] = tab[c2] - tab[c2 + 1];
				tab[c2] = tab[c2] - tab[c2 + 1];
			}
			c2++;
		}
		counter++;
	}
}

/*
int	main(void)
{
	int	test[5];
	int	size;

	test[0] = 7;
	test[1] = 1;
	test[2] = 8;
	test[3] = 2;
	test[4] = 0;
	size = 5;
	for (int i = 0; i<size; i++)
	{
		printf("%d\n",test[i]);
	}
	printf("\n\n");
	ft_sort_int_tab(test, size);
	for (int i = 0; i<size; i++)
	{
		printf("%d\n",test[i]);
	}
}
*/