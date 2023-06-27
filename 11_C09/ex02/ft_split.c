/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 10:49:14 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/25 11:30:36 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sep_check(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

unsigned int	wordcount(char *str, char *charset)
{
	unsigned int	i;

	i = 0;
	while (*str)
	{
		if (!sep_check(*str, charset))
		{
			i++;
			while (*str && !sep_check(*str, charset))
				str++;
		}
		str++;
	}
	return (i);
}

void	ft_strcpy(char *dest, char *start, char *end)
{
	while (start < end)
		*(dest++) = *(start++);
	*dest = 0;
}

char	**ft_split(char *str, char *charset)
{
	char			**final;
	unsigned int	i;
	char			*start;

	final = (char **)malloc(sizeof(char *) * wordcount(str, charset) + 1);
	i = 0;
	while (*str)
	{
		if (!sep_check(*str, charset))
		{
			start = str;
			while (*str && !sep_check(*str, charset))
				++str;
			final[i] = (char *)malloc(str - start + 1);
			ft_strcpy(final[i++], start, str);
		}
		++str;
	}
	final[i] = 0;
	return (final);
}
