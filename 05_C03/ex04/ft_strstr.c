/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:35:33 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/15 13:20:35 by dmarinko         ###   ########.fr       */
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

/*
int	main(void)
{
	char	string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	string2[] = "vas";
	char	*nr;
	
	nr = ft_strstr(&string, &string2);
	printf("%s\n\n", string);
	
	printf("%s\n\n", nr);
	return (0);
}
*/