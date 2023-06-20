/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljiriste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:51:37 by ljiriste          #+#    #+#             */
/*   Updated: 2023/06/18 22:05:03 by ljiriste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILITIES_H
# define UTILITIES_H
# include "permutation.h"
# include "game_state.h"

void	write_error(void);
int		simple_atoi(char *str);
void	input_perm(struct s_game_state state, struct s_perm perm, int row);
void	remove_perm(struct s_game_state state, int row);
void	copy_column(int *dest, struct s_game_state state, int col);

#endif
