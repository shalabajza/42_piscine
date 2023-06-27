/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_number.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseykora <mseykora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:14:07 by mseykora          #+#    #+#             */
/*   Updated: 2023/06/25 19:19:48 by mseykora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRITE_NUMBER_H
# define WRITE_NUMBER_H
# include "dictionaries.h"

void	print_number(unsigned int key, t_dict_entry *entries);
void	calculate_hundred(unsigned int nbr, t_dict_entry *entries);
void	write_number(unsigned int nbr, t_dict_entry *entries);

#endif
