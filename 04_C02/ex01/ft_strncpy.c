/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:22:21 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/15 18:43:57 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		++i;
	}
	while (i <= n)
		dest[i++] = '\0';
	return (dest);
}
/*
int	main() {
	char src[] = "Hello my friend how are you";
	char dest[10];
	
	printf("Copied string: %s \n", strncpy(dest, src, 10));
	
	return(0);
}
*/
