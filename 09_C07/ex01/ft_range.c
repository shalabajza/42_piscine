/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:43:32 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/22 15:00:05 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret;
	int	*tmp;

	if (min >= max)
		return (0);
	ret = (int *)malloc(sizeof(int) * (max - min));
	if (!ret)
		return (0);
	tmp = ret;
	while (min < max)
		*(tmp++) = min++;
	return (ret);
}
