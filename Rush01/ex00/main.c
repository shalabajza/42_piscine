/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljiriste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:53:09 by ljiriste          #+#    #+#             */
/*   Updated: 2023/06/18 22:07:24 by ljiriste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "utilities.h"
#include "limits_check.h"
#include "permutation.h"
#include "game_state.h"

int	complementary_check(struct s_game_state state)
{
	int	*subarray;
	int	i;
	int	up_b;
	int	down_b;

	i = 0;
	subarray = malloc(state.n * sizeof(int));
	while (i < state.n)
	{
		copy_column(subarray, state, i);
		up_b = state.borders[0 * state.n + i];
		down_b = state.borders[1 * state.n + i];
		if (!limits_check(subarray, up_b, down_b, state.n))
			return (0);
		++i;
	}
	return (1);
}

int	partial_check(struct s_game_state state, int row)
{
	int	i;
	int	j;
	int	left_b;
	int	right_b;

	left_b = state.borders[2 * state.n + row];
	right_b = state.borders[3 * state.n + row];
	if (!limits_check(&state.board[row * state.n], left_b, right_b, state.n))
		return (0);
	i = 0;
	while (i < state.n)
	{
		j = 0;
		while (j < row)
		{
			if (state.board[j * state.n + i] == state.board[row * state.n + i])
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

int	solve(struct s_game_state state, int row)
{
	struct s_perm	perm;
	int				cond;

	if (complementary_check(state))
		return (1);
	else if (row == state.n)
		return (0);
	perm = create_first_perm(state.n);
	cond = 1;
	while (cond)
	{
		input_perm(state, perm, row);
		if (partial_check(state, row))
		{
			if (solve(state, row + 1))
			{
				free_perm(perm);
				return (1);
			}
		}
		remove_perm(state, row);
		cond = advance_perm(perm);
	}
	free_perm(perm);
	return (0);
}

int	main(int args, char **argv)
{
	struct s_game_state	state;

	if (args == 3)
		state.n = simple_atoi(argv[2]);
	else if (args == 2)
		state.n = 4;
	state.borders = create_borders(argv[1], state.n);
	state.board = create_empty_board(state.n);
	if (!state.borders || !state.board)
	{
		write_error();
		free(state.borders);
		free(state.board);
		return (0);
	}
	if (solve(state, 0))
		print_board(state);
	else
		write_error();
	free(state.board);
	free(state.borders);
	return (0);
}
