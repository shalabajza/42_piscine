/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutation.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljiriste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:50:58 by ljiriste          #+#    #+#             */
/*   Updated: 2023/06/18 21:18:59 by ljiriste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERMUTATION_H
# define PERMUTATION_H

struct	s_perm
{
	int	n;
	int	*encoding;
	int	*perm;
};
void			print_perm(struct s_perm perm);
struct s_perm	create_first_perm(int n);
void			free_perm(struct s_perm perm);
void			swap(int *p1, int *p2);
int				advance_perm(struct s_perm perm);

#endif
