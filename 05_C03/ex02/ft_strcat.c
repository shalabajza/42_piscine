/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:52:56 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/15 13:07:55 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
		++ptr;
	while (*src)
	{
		*ptr = *src;
		++src;
		++ptr;
	}
	*ptr = 0;
	return (dest);
}
