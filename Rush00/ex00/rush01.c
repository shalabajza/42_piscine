/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:06:54 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/10 17:13:21 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush01(int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if ((j == 0 && i == 0) || (j == (x - 1) && i == (y - 1)))
				write(1, "/", 1);
			else if ((j == (x - 1) && i == 0) || (j == 0 && i == (y - 1)))
				write(1, "\\", 1);
			else if ((j > 0) && (j < (x - 1)) && ((i == 0) || (i == (y - 1))))
				write(1, "*", 1);
			else if (((i > 0) && (i < (y - 1))) && ((j == 0) || (j == (x - 1))))
				write(1, "*", 1);
			else
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 10;
	num2 = 10;
	rush01(num1, num2);
	return (0);
}
