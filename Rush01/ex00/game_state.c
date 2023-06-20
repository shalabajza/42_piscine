/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_state.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljiriste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:58:42 by ljiriste          #+#    #+#             */
/*   Updated: 2023/06/18 21:48:31 by ljiriste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "game_state.h"
#include "utilities.h"

/*	borders first index legend
 *	i	meaning
 *	0	up
 *	1	down
 *	2	left
 *	3	right
 */
int	*create_borders(char *str, int n)
{
	int	*borders;
	int	i;
	int	value;

	borders = malloc(4 * n * sizeof(int));
	i = 0;
	while (i < 4 * n)
	{
		if (!('0' <= *str && *str <= '9'))
			return (NULL);
		value = simple_atoi(str);
		if (0 < value && value <= n)
			borders[i] = value;
		else
			return (NULL);
		while ('0' <= *str && *str <= '9')
			++str;
		while (*str == ' ')
			++str;
		++i;
	}
	if (*str != '\0')
		return (NULL);
	return (borders);
}

int	*create_empty_board(int n)
{
	int	*board;
	int	i;

	board = malloc(sizeof(int) * n * n);
	i = 0;
	while (i < n * n)
	{
		board[i] = 0;
		++i;
	}
	return (board);
}

void	print_board(struct s_game_state state)
{
	int		i;
	int		j;
	char	digit;

	i = 0;
	while (i < state.n)
	{
		j = 0;
		while (j < state.n)
		{
			digit = '0' + state.board[state.n * i + j];
			write(1, &digit, 1);
			if (j < state.n)
				write(1, " ", 1);
			++j;
		}
		write(1, "\n", 1);
		++i;
	}
	return ;
}
