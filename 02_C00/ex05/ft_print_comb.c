/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:31:36 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/08 18:46:25 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = '0';
	while (c1 <= '9')
	{
		c2 = c1 + 1;
		while (c2 <= '9')
		{
			c3 = c2 + 1;
			while (c3 <= '9')
			{
				write(1, &c1, 1);
				write(1, &c2, 1);
				write(1, &c3, 1);
				write(1, ", ", 2);
				c3++;
			}
			c2++;
		}
		c1++;
	}
}

/*
int	main(void)
{
	ft_print_comb ();
	return (0);
}
*/