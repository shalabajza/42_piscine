/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   limits_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljiriste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:30:11 by ljiriste          #+#    #+#             */
/*   Updated: 2023/06/18 20:32:19 by ljiriste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "limits_check.h"

int	count_front(int *array, int n)
{
	int	max;
	int	count;
	int	i;

	i = 0;
	max = 0;
	count = 0;
	while (i < n)
	{
		if (array[i] > max)
		{
			max = array[i];
			++count;
		}
		++i;
	}
	return (count);
}

int	count_rear(int *array, int n)
{
	int	max;
	int	count;
	int	i;

	i = n - 1;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		if (array[i] > max)
		{
			max = array[i];
			++count;
		}
		--i;
	}
	return (count);
}

int	limits_check(int *array, int start, int end, int n)
{
	if (count_front(array, n) != start)
		return (0);
	if (count_rear(array, n) != end)
		return (0);
	return (1);
}
