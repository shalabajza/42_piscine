/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:43:23 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/22 14:50:39 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*ret;

	len = 0;
	while (src[len])
		++len;
	ret = (char *) malloc(len + 1);
	ret[len] = 0;
	while (--len >= 0)
		ret[len] = src[len];
	return (ret);
}
