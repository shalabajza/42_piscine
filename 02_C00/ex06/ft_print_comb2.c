/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:01:00 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/10 19:24:54 by dmarinko         ###   ########.fr       */
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

void	num_to_char(int num, int num2)
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c1 = (num / 10) + '0';
	c2 = (num % 10) + '0';
	c3 = (num2 / 10) + '0';
	c4 = (num2 % 10) + '0';
	print_numbers(c1, c2, c3, c4);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			num_to_char(i, j);
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/