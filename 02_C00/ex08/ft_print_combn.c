/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 20:03:07 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/11 20:24:14 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int	recursion(int n, int counter)
{
	
	if (n != 0)
		recursion((n - 1), (counter + 1));
	
}

void	ft_print_combn(int n)
{
	int	counter;
	char	*string[10];
	
	counter = -1;
	while (counter++ < n)
	{
		string[counter] = counter;
	}
	string[counter] = '\0';
	recursion(n, counter);
}