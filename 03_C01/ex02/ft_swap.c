/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:21:53 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/09 11:26:52 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

void	main(void)
{
	int	a;
	int	b;
	
	a = 5;
	b = 10;
	printf("%d, %d",a,b);
	ft_swap(&a, &b);
	printf("%d, %d",a,b);
}
*/