/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionaries.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseykora <mseykora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:13:38 by mseykora          #+#    #+#             */
/*   Updated: 2023/06/25 21:01:00 by mseykora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARIES_H
# define DICTIONARIES_H

typedef struct t_dict_entry
{
	unsigned int		key;
	char				*value;
}	t_dict_entry;

typedef struct t_dict
{
	int				dict_len;
	t_dict_entry	*entries;
}	t_dict;

typedef struct t_state
{
	int				number_input;
	t_dict			*num_char_dict;
}	t_state;

void			write_error(void);
t_dict_entry	*create_num_char_dict(void);
void			print_dict_entries(t_dict_entry *entries);

#endif
