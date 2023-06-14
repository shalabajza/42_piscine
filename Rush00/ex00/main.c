/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:35:41 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/13 16:59:02 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);

int	string_to_int(char *str)
{
	int	result;
	int	i;
	int	digit;

	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		digit = str[i] - '0';
		result = result * 10 + digit;
		i++;
	}
	return (result);
}

int	main(int argc, char *argv[])
{
	int	num1;
	int	num2;

	if (argc == 1)
	{
		num1 = 7;
		num2 = 5;
	}
	else if (argc == 2)
	{
		num2 = string_to_int(argv[1]);
		num1 = num2 * 2;
	}
	else
	{
		num1 = string_to_int(argv[1]);
		num2 = string_to_int(argv[2]);
	}
	rush01(num1, num2);
	return (0);
}
