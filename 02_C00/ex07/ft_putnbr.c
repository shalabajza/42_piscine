/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:25:53 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/10 20:13:08 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	modprint(int nb)
{
	char	c;	

	if (nb == 0)
		return ;
	c = nb % 10 + '0';
	nb /= 10;
	modprint(nb);
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	else if (nb == 0)
		write(1, '0', 1);
	else
		modprint(nb);
}

/*
int	main(void)
{
	int	a;
	a = 123456;
	ft_putnbr(a);
	return (0);
}
*/
