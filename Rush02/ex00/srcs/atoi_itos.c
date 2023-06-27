/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_itos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseykora <mseykora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:20:11 by mseykora          #+#    #+#             */
/*   Updated: 2023/06/25 21:48:36 by mseykora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int	ft_is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

unsigned int	ft_atoi(char *str, int *error_code)
{
	unsigned long int	number;
	int					i;

	number = 0;
	i = 0;
	while (str[i] && ft_is_space(str[i]) == 1)
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		number = number * 10;
		number += str[i] - '0';
		if (number > 4294967295)
		{
			*error_code = 1;
			break ;
		}
		i++;
	}
	if (str[i] && !(str[i] >= '0' && str[i] <= '9'))
		*error_code = 1;
	return (number);
}

char	*ft_itos(unsigned int nbr)
{
	char			*str;
	int				digit_l;
	unsigned int	tmp_num;

	digit_l = 0;
	tmp_num = nbr;
	while (tmp_num > 0)
	{
		tmp_num = tmp_num / 10;
		digit_l++;
	}
	str = (char *)malloc(sizeof(char *) * digit_l + 1);
	if (!str)
		return (NULL);
	str[digit_l] = '\0';
	while (digit_l > 0)
	{
		str[digit_l - 1] = nbr % 10 + 48;
		nbr = nbr / 10;
		digit_l--;
	}
	return (str);
}
