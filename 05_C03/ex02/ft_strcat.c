/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:52:56 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/15 14:35:30 by dmarinko         ###   ########.fr       */
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

int	main()
{
	char	str1[] = "asdasd";
	char	str2[] = "vvvvvv";
	char	str3[] = "vvvvvv";

	printf("%s\n", strcat(str2, str1));
	printf("%s\n", ft_strcat(str3, str1));
}