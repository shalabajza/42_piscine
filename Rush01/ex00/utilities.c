/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljiriste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:04:52 by ljiriste          #+#    #+#             */
/*   Updated: 2023/06/18 22:05:35 by ljiriste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utilities.h"
#include "permutation.h"
#include "game_state.h"

void	write_error(void)
{
	write(2, "Error\n", 6);
	return ;
}

int	simple_atoi(char *str)
{
	int	res;

	res = 0;
	while ('0' <= *str && *str <= '9')
	{
		res *= 10;
		res += *str - '0';
		++str;
	}
	return (res);
}

void	input_perm(struct s_game_state state, struct s_perm perm, int row)
{
	int	i;

	i = 0;
	while (i < state.n)
	{
		state.board[row * state.n + i] = perm.perm[i];
		++i;
	}
	return ;
}

void	remove_perm(struct s_game_state state, int row)
{
	int	i;

	i = 0;
	while (i < state.n)
	{
		state.board[row * state.n + i] = 0;
		++i;
	}
	return ;
}

void	copy_column(int *dest, struct s_game_state state, int col)
{
	int	i;

	i = 0;
	while (i < state.n)
	{
		dest[i] = state.board[i * state.n + col];
		++i;
	}
	return ;
}
