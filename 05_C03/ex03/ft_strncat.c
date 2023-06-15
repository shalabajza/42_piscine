/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:09:58 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/15 13:21:08 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	ptr = dest;
	while (ptr[i] && i < nb)
		i++;
	while (*src && i < nb)
	{
		*ptr = *src;
		++src;
		++ptr;
		++i;
	}
	*ptr = 0;
	return (dest);
}
