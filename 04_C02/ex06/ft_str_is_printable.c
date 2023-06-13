/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:45:15 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/13 16:38:36 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= ' ') && (str[i] <= '~')))
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

	string[0] = 't';
	string[1] = '~';
	string[2] = '\n';
	string[3] = '\0';
	
	isit = ft_str_is_printable(string);
	printf("%d",isit);
	return (0);
}
*/