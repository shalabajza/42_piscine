/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:35:33 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/15 14:16:02 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		k;
	char	*start_location;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			k = i;
			start_location = &str[k];
			while (str[k] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (start_location);
				k++;
				j++;
			}
		}
		i++;
	}
	return (0);
}


int	main(void)
{
	char	str1[] = "ab";
	char	str2[] = "dfghdfhfgab123";
	char	str3[] = "dfghdfhfgab123";
	char	*nr2;
	char	*nr3;
	
	nr2 = strstr(str2, str1);
	nr3 = ft_strstr(str3, str1);
	printf("%s\n", str2);
	printf("%s\n\n", str3);
	
	printf("%s\n", nr2);
	printf("%s\n", nr3);
	return (0);
}
