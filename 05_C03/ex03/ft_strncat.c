/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:09:58 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/15 15:33:14 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char		*ptr;
	int	i;
	int	j;

	i = 0;
	j = 0;
	ptr = dest;
	while (ptr[i++] && i < nb);
	i--;
	while (src[j] && i < nb)
	{
		ptr[i] = src[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (dest);
}

/*
int	main()
{
	char	str1[20] = "abc";
	char	str2[20] = "123";
	char	str3[20] = "123";
	int	n = 20;

	printf("%s\n", ft_strncat(str3, str1, n));
}
*/