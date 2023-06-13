/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:12:46 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/13 14:41:27 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0') || (str[i] > '9'))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char string[20];
	int	isit;

	string[0] = '3';
	string[1] = '2';
	string[2] = '1';
	string[3] = '\0';
	
	isit = ft_str_is_numeric(string);
	printf("%d",isit);
	return (0);
}
*/