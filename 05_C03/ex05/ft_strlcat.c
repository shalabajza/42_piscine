/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:01:00 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/15 16:30:09 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (*dest && i < size)
	{
		++i;
		++dest;
	}
	while (*src && i + 1 < size)
	{
		*dest = *src;
		++dest;
		++src;
		++i;
	}
	if (i < size)
		*dest = 0;
	while (*src)
	{
		++i;
		++src;
	}
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest1[20] = "";
	char dest2[20] = "";
	char src[] = "abc";
	unsigned int size = 100;

	// Using ft_strlcat
	unsigned int ft_result = ft_strlcat(dest1, src, size);
	printf("ft_strlcat: %s\n", dest1);
	printf("ft_strlcat result: %u\n", ft_result);

	// Using strlcat
	unsigned int result = strlcat(dest2, src, size);
	printf("strlcat: %s\n", dest2);
	printf("strlcat result: %u\n", result);

	return 0;
}
*/