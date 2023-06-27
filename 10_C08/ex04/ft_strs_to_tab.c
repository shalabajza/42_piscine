/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:52:00 by dmarinko          #+#    #+#             */
/*   Updated: 2023/06/27 21:03:40 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

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

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(sizeof(src) * (i + 1));
	i = 0;
	if (dest == NULL)
		return (NULL);
	else
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*tab;
	int				i;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].size = ft_strlen(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
