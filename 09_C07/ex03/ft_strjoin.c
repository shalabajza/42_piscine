/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:43:47 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/22 16:56:30 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_count;
	int	i;

	dest_count = 0;
	i = 0;
	while (dest[dest_count])
		dest_count++;
	while (src[i])
		dest[dest_count++] = src[i++];
	dest[dest_count] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*r_string;
	int		len_of_r_str;
	int		j;

	j = 0;
	len_of_r_str = 0;
	if (size <= 0)
		return ((char *)malloc(len_of_r_str));
	while (j < size)
		len_of_r_str += ft_strlen(strs[j++]);
	len_of_r_str += ft_strlen(sep) * (size - 1);
	r_string = (char *)malloc(len_of_r_str * sizeof(*r_string));
	j = 0;
	while (j < size)
	{
		ft_strcat(r_string, strs[j++]);
		if (j < size)
			ft_strcat(r_string, sep);
	}
	return (r_string);
}

/* int	main()
{
	char	*strs[] = {"Hello", "world", "how", "R", "U?", NULL};
	char	sep[] = " SPACE ";
	int		size = 0; // how many words are in strs
	while (strs[size])
		size++;
	char *str = ft_strjoin(size, strs, sep);
	printf("%s\n", str);
	free(str);
	return (0);
} */