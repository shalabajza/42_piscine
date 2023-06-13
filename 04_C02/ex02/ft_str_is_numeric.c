/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:12:46 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/12 17:20:44 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		printf("%c",str[i++]);
	}
}

int	main(void)
{
	char string[20];

	string[0] = 'a';
	string[1] = 'b';
	string[2] = 'c';
	string[3] = '\0';
	
	ft_str_is_numeric(string);
	return (0);
}