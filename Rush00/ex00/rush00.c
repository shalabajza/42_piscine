/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:06:54 by psimcak           #+#    #+#             */
/*   Updated: 2023/06/11 17:18:37 by psimcak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int		i;
	int		j;

	i = -1;
	while (++i < y)
	{
		j = -1;
		while (j++ < x)
		{
			if (((i == 0) && (j == 0)) || ((i == 0) && (j == (x - 1))))
				ft_putchar('o');
			else if ((i == (y - 1)) && (j == 0))
				ft_putchar('o');
			else if ((i == (y - 1)) && (j == (x - 1)))
				ft_putchar('o');
			else if (((j > 0) && (j < (x - 1)) && ((i == 0) || (i == (y - 1)))))
				ft_putchar('-');
			else if (((i > 0) && (i < (y - 1)) && ((j == 0) || (j == (x - 1)))))
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
