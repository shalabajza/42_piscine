/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:26:13 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/16 11:15:08 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	basecheck(char *base, int base_n)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (true);
	while (i < base_n)
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (true);
		while (j < base_n)
		{
			if (base[i] == base[j])
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_n;

	base_n = ft_strlen(base);
	if (basecheck(base, base_n))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr >= base_n)
		ft_putnbr_base((nbr / base_n), base);
	ft_putchar(base[(nbr % base_n)]);
}

int	ft_string_to_int(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

/*
int	main(int argc, char *argv[])
{
	int		nbr;
	char	*base;

	nbr = ft_string_to_int(argv[1]);
	base = argv[2];
	ft_putnbr_base(nbr, base);
	return (0);
}
*/