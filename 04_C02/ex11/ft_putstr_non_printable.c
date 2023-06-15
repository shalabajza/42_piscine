/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:17:25 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/15 16:25:43 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hexa(int c)
{
	char	*base;

	base = "0123456789abcdef";
	if (c >= 16)
	{
		ft_putchar(base[c / 16]);
		ft_putchar(base[c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(base[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_put_hexa(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

/*
int	main(void)
{
	char	*string = "Coucou\ntu vas bien ?";
	printf("%s\n\n", string);
	ft_putstr_non_printable(string);
	return (0);
}
*/