/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:41:45 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/15 11:25:47 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alphanumeric(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else if ((c >= 'A') && (c <= 'Z'))
		return (2);
	else if ((c >= '0') && (c <= '9'))
		return (3);
	else
		return (0);
}

char	ft_charupcase(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char	ft_charlowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_first;

	i = -1;
	is_first = 1;
	while (str[++i])
	{
		if (is_first == 1)
		{
			if (!(ft_char_is_alphanumeric(str[i]) == 0))
			{
				str[i] = ft_charupcase(str[i]);
				is_first = 0;
			}
		}
		else if (is_first == 0)
		{
			if (ft_char_is_alphanumeric(str[i]) == 0)
				is_first = 1;
			else
				str[i] = ft_charlowcase(str[i]);
		}
	}
	return (str);
}
