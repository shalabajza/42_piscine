/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:17:25 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/14 15:06:32 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(int num)
{
	char	c;

	c = '\\';
	write(1, &c, 1);
	if (num / 16 < 10)
		c = (num / 16) + '0';
	else
		c = (num / 16) - 10 + 'a';
	write(1, &c, 1);
	if (num % 16 < 10)
		c = (num % 16) + '0';
	else
		c = (num % 16) - 10 + 'a';
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (!((c >= ' ') && (c <= '~')))
		return (0);
	return (1);
}

void	ft_putchar(char c)
{
	if (ft_char_is_printable(c) == 1)
		write(1, &c, 1);
	else
		ft_print_hex(c);
}

void ft_putstr_non_printable(char *str)
{
	int	i;

	i = -1;
	while(str[++i] != '\0')
	{
		ft_putchar(str[i]);
	}
}

/*
int	main(void)
{
	char	string[] = "Coucou\ntu vas bien ?";
	printf("%s\n\n", string);
	ft_putstr_non_printable(&string);
	return (0);
}
*/