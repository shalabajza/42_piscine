/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:07:40 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/21 14:03:12 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int	ft_sqrt_recur(int nb, int i)
{
	if (i * i == nb)
		return (i);
	if (i * i < nb && (i * i) >= 0)
		return (ft_sqrt_recur(nb, i + 1));
	return (0);
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_recur(nb, 0));
}

int	main(void)
{
	clock_t start, end;
    	/* Store time before function call */
    	start = clock();
    	printf("%d IS THE SQUARE ROOT OF UR NR\n\n", ft_sqrt(2147483600));
   	/* Store time after function call */
   	end = clock();
   	/* Get the time taken by program to execute in seconds */
   	double duration = ((double)end - start)/CLOCKS_PER_SEC;
     
   	printf("Time taken to execute in seconds : %f", duration);
    	return 0;
}