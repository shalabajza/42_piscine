/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:06:53 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/14 14:16:50 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	while (src[i])
		i++;
	return (i);
}

/*
int	main(void)
{
	char	string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	bing[32];
	int	nr;
	
	nr = ft_strlcpy(&bing, &string, 10);
	printf("%s\n\n", string);
	printf("%s\n%d\n\n", bing, nr);
	return (0);
}
*/