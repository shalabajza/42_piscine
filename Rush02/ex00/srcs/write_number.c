/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 19:36:42 by mganbat           #+#    #+#             */
/*   Updated: 2023/06/25 20:05:55 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	print_number(unsigned int key, t_dict_entry *entries)
{
	int	i;
	int	size;

	i = 0;
	while (i < 32)
	{
		if (key == entries[i].key)
		{
			size = ft_strlen(entries[i].value);
			write(1, entries[i].value, size);
			write(1, " ", 1);
			return ;
		}
		i++;
	}
	write(1, "cound not found", 100);
}

void	calculate_hundred(unsigned int nbr, t_dict_entry *entries)
{
	if (nbr / 100 > 0)
	{
		print_number(nbr / 100, entries);
		print_number(100, entries);
	}
	if (nbr % 100 > 0 && nbr % 100 <= 20)
		print_number(nbr % 100, entries);
	else
	{
		if (nbr % 100 / 10 > 0)
		{
			print_number(nbr % 100 / 10 * 10, entries);
			if (nbr % 10 > 0)
				print_number(nbr % 10, entries);
		}
	}
}

void	write_number(unsigned int nbr, t_dict_entry *entries)
{
	unsigned int	divider;

	divider = 1000000000;
	if (nbr == 0)
	{
		print_number(0, entries);
		return ;
	}
	while (divider > 999)
	{
		if (nbr > divider - 1)
		{
			calculate_hundred(nbr / divider, entries);
			print_number(divider, entries);
			nbr = nbr % divider;
		}
		divider = divider / 1000;
	}
	calculate_hundred(nbr, entries);
}
