/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:25:57 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/16 11:16:27 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rec(int nb)
{
	char	c;

	if (!nb)
		return ;
	rec(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	rec(nb);
}
