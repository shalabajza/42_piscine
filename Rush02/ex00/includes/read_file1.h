/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file1.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseykora <mseykora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 23:14:07 by mseykora          #+#    #+#             */
/*   Updated: 2023/06/25 23:17:05 by mseykora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_FILE1_H
# define READ_FILE1_H

char			*trim_whitespace(const char *str);
int				count_lines(int fd);
void			process_line(t_dict *dict, char *line, int *i);
t_dict			load_dict(const char *filename);
t_dict			init_dict(void);
int				open_file(const char *filename);

#endif
