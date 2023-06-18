/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljiriste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:53:09 by ljiriste          #+#    #+#             */
/*   Updated: 2023/06/17 19:33:30 by ljiriste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fill_border(int borders[4][4], char *str)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			borders[i][j] = *str - '0';
			str += 2;
			++j;
		}
		++i;
	}
	return ;
}

void	empty_board(int board[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			board[i][j] = 0;
			++j;
		}
		++i;
	}
	return ;
}

int	limits_check(int array[4], int start, int end)
{
	int	max;
	int	count;
	int	i;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (array[i] > max)
		{
			max = array[i];
			++count;
		}
		++i;
	}
	if (count != start)
		return (0);
	max = 0;
	count = 0;
	i = 3;
	while (i >= 0)
	{
		if (array[i] > max)
		{
			max = array[i];
			++count;
		}
		--i;
	}
	if (count != end)
		return (0);
	return (1);
}

// Returns 0 if the array has differing elements from row in table
// also returns 0 if it would make a number repeating in a column
// Otherwise the array can be placed in table, and this function returns 1
int	placeable_in_row(int array[4], int row, int table[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (array[i] != table[row][i] && table[row][i] != 0)
			return (0);
		j = 0;
		while (j < 4)
		{
			if (array[i] == table[j][i] && j != row)
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}
	
void	write_row(int board[4][4], int array[4], int row)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		board[row][i] = array[i];
		++i;
	}
	return ;
}

int	solve_row(int board[4][4], int row, int left, int right)
{
	int perms[24][4] = {{1, 2, 3, 4}, {1, 2, 4, 3}, {1, 3, 2, 4}, {1, 3, 4, 2}, {1, 4, 3, 2},
					{1, 4, 2, 3}, {2, 1, 3, 4}, {2, 1, 4, 3}, {2, 3, 1, 4}, {2, 3, 4, 1},
					{2, 4, 3, 1}, {2, 4, 1, 3}, {3, 2, 1, 4}, {3, 2, 4, 1}, {3, 1, 2, 4},
					{3, 1, 4, 2}, {3, 4, 1, 2}, {3, 4, 2, 1}, {4, 2, 3, 1}, {4, 2, 1, 3},
					{4, 3, 2, 1}, {4, 3, 1, 2}, {4, 1, 3, 2}, {4, 1, 2, 3}};
	int	i;
	int	valid_count;
	int	valid_index;

	i = 0;
	valid_count = 0;
	while (i < 24)
	{
		if (limits_check(perms[i], left, right) && placeable_in_row(perms[i], row, board))
		{
			++valid_count;
			valid_index = i;
		}
		++i;
	}
	if (valid_count == 1)
	{
		write_row(board, perms[valid_index], row);
		return (1);
	}
	return (0);
}

int	placeable_in_column(int array[4], int column, int table[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (array[i] != table[i][column] && table[i][column] != 0)
			return (0);
		j = 0;
		while (j < 4)
		{
			if (array[i] == table[i][j] && j != column)
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}
	
void	write_column(int board[4][4], int array[4], int column)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		board[i][column] = array[i];
		++i;
	}
	return ;
}

int solve_column(int board[4][4], int column, int up, int down)
{
	int perms[24][4] = {{1, 2, 3, 4}, {1, 2, 4, 3}, {1, 3, 2, 4}, {1, 3, 4, 2}, {1, 4, 3, 2},
					{1, 4, 2, 3}, {2, 1, 3, 4}, {2, 1, 4, 3}, {2, 3, 1, 4}, {2, 3, 4, 1},
					{2, 4, 3, 1}, {2, 4, 1, 3}, {3, 2, 1, 4}, {3, 2, 4, 1}, {3, 1, 2, 4},
					{3, 1, 4, 2}, {3, 4, 1, 2}, {3, 4, 2, 1}, {4, 2, 3, 1}, {4, 2, 1, 3},
					{4, 3, 2, 1}, {4, 3, 1, 2}, {4, 1, 3, 2}, {4, 1, 2, 3}};
	int	i;
	int	valid_count;
	int	valid_index;

	i = 0;
	valid_count = 0;
	while (i < 24)
	{
		if (limits_check(perms[i], up, down) && placeable_in_column(perms[i], column, board))
		{
			++valid_count;
			valid_index = i;
		}
		++i;
	}
	if (valid_count == 1)
	{
		write_column(board, perms[valid_index], column);
		return (1);
	}
	return (0);
}

int	is_full(int board[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (board[i][j] == 0)
				return (0);
			++j;
		}
	++i;
	}
	return (1);
}

int	solve(int board[4][4], int borders[4][4])
{
	int	i;
	int cond;

	cond = 1;
	while (cond && !is_full(board))
	{
		cond = 0;
		i = 0;
		while (i < 4)
		{
			cond += solve_row(board, i, borders[2][i], borders[3][i]);
			++i;
		}
		i = 0;
		while (i < 4)
		{
			cond += solve_column(board, i, borders[0][i], borders[1][i]);
			++i;
		}
	}
	if (cond != 0)
		return (1);
	return (0);
}

void	write_error(char *str)
{
	while (*str)
		write(2, str++, 1);
	return ;
}

void	print_board(int board[4][4])
{
	int		i;
	int		j;
	char	digit;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			digit = '0' + board[i][j];
			write(1, &digit, 1);
			if (j != 3)
				write(1, " ", 1);
			++j;
		}
		write(1, "\n", 1);
		++i;
	}
	return ;
}

/*	borders first index legend
 *	i	meaning
 *	0	up
 *	1	down
 *	2	left
 *	3	right
 */
int	main(int args, char **argv)
{
	int borders[4][4];
	int	board[4][4];

	if (args != 2)
	{
		write_error("Invalid number of arguments, there should only be 1!\n");
		return (0);
	}
	fill_border(borders, argv[1]);
	empty_board(board);
	if (solve(board, borders))
		print_board(board);
	else
		write_error("No solution found!\n");
	return (0);
}
