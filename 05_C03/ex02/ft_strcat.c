/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:52:56 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/15 16:35:28 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main()
{
	char	str1[32] = "asdasd";
	char	str2[32] = "vvvvvv";
	char	str3[32] = "vvvvvv";

	printf("%s\n", strcat(str2, str1));
	printf("%s\n", ft_strcat(str3, str1));
}
*/