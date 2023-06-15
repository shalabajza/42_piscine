/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:35:33 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/15 16:28:50 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			j = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					j = 1;
				i++;
			}
			if (j == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

/*
int	main(void)
{
	char	str1[] = "123";
	char	str2[] = "dfghdfhfgab123";
	char	str3[] = "dfghdfhfgab123";
	char	*nr2;
	char	*nr3;
	
	nr3 = ft_strstr(str3, str1);
	nr2 = strstr(str2, str1);
	printf("%s\n", str2);
	printf("%s\n\n", str3);
	
	printf("%s\n", nr2);
	printf("%s\n", nr3);
	return (0);
}
*/