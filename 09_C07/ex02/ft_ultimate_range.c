/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:43:41 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/22 16:56:46 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	ret;
	int	*tmp;

	if (min >= max)
		return (0);
	ret = max - min;
	*range = (int *)malloc(sizeof(int) * ret);
	if (!*range)
		return (-1);
	tmp = *range;
	while (min < max)
		*(tmp++) = min++;
	return (ret);
}
