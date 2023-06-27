/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file2.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseykora <mseykora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:39:00 by mseykora          #+#    #+#             */
/*   Updated: 2023/06/25 23:17:25 by mseykora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_FILE2_H
# define READ_FILE2_H

t_dict_entry	*allocate_entries(int fd, int line_count);
FILE			*get_file_ptr(int fd, t_dict_entry *entries);
void			process_file(FILE *file_ptr, t_dict *dict);
t_dict			load_dict(const char *filename);

#endif
