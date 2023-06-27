/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseykora <mseykora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:18:18 by mseykora          #+#    #+#             */
/*   Updated: 2023/06/25 23:30:46 by mseykora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STATE_H
# define STATE_H
# include "dictionaries.h"

typedef struct t_state
{
	int				number_input;
	int				num_char_len;
	t_dict			*num_char_dict;
	int				error;
}	t_state;

#endif
