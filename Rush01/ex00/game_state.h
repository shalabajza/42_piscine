/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_state.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljiriste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:59:56 by ljiriste          #+#    #+#             */
/*   Updated: 2023/06/18 21:21:35 by ljiriste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_STATE_H
# define GAME_STATE_H

struct	s_game_state
{
	int	n;
	int	*board;
	int	*borders;
};

int		*create_borders(char *str, int n);
int		*create_empty_board(int n);
void	print_board(struct s_game_state state);

#endif
