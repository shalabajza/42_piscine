/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:01:00 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/10 17:22:08 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(char c1, char c2, char c3, char c4)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, " ", 1);
	write(1, &c3, 1);
	write(1, &c4, 1);
	write(1, ", ", 2);
}

void	numbers(int i, int j)
{
	while (i <= 99)
	{
		while (j <= 99)
		{
			
		}
	}
}

void	ft_print_comb2(void)
{
	int	nr1;
	int	nr2;

	nr1 = 0;
	nr2 = 0;
	numbers(nr1, nr2);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
