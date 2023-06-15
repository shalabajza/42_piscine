/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:09:58 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/15 14:12:11 by dmarinko         ###   ########.fr       */
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

int	main()
{
	char	str1[] = "abc";
	char	str2[] = "123";
	char	str3[] = "123";
	int	n = 10;

	printf("%s\n", strncat(str2, str1, n));
	printf("%s\n", ft_strncat(str3, str1, n));
}