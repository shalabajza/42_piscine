/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:13:00 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/08 18:31:46 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	np;

	if (n < 0)
	{
		np = 'N';
	}
	else
	{
		np = 'P';
	}
	write (1, &np, 1);
}

/*
int	main(void)
{
	ft_is_negative(5);
	return (0);
}
*/