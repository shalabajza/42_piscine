/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:40:23 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/09 12:05:29 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		str++;
		counter++;
	}
	return (counter);
}

/*
#include <stdio.h>

void	main(void)
{
	char	*str;
	int	count;
	
	count = 0;
	printf("%d",count);
	str = "LOLasasdasdas";
	count = ft_strlen(str);
	printf("%d",count);
}
*/