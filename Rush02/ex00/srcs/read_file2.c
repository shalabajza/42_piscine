/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseykora <mseykora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 23:03:12 by mseykora          #+#    #+#             */
/*   Updated: 2023/06/25 23:12:27 by mseykora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

t_dict_entry	*allocate_entries(int fd, int line_count)
{
	t_dict_entry	*entries;

	entries = (t_dict_entry *)malloc(line_count * sizeof(t_dict_entry));
	if (entries == NULL)
	{
		printf("Memory allocation failed.\n");
		close(fd);
	}
	return (entries);
}

FILE	*get_file_ptr(int fd, t_dict_entry *entries)
{
	FILE	*file_ptr;

	file_ptr = fdopen(fd, "r");
	if (file_ptr == NULL)
	{
		printf("Error converting file descriptor to FILE pointer.\n");
		close(fd);
		if (entries != NULL)
			free(entries);
	}
	return (file_ptr);
}

void	process_file(FILE *file_ptr, t_dict *dict)
{
	char	*line;
	size_t	line_length;
	ssize_t	bytes_read_line;
	int		i;

	line = NULL;
	line_length = 0;
	i = 0;
	bytes_read_line = getline(&line, &line_length, file_ptr);
	while (bytes_read_line != -1)
	{
		process_line(dict, line, &i);
		bytes_read_line = getline(&line, &line_length, file_ptr);
	}
	dict->dict_len = i;
	fclose(file_ptr);
	free(line);
}

void	allocate_and_read_file(int fd, t_dict *dict, int line_count)
{
	FILE	*file_ptr;

	dict->entries = allocate_entries(fd, line_count);
	if (dict->entries == NULL)
	{
		close(fd);
		return ;
	}
	lseek(fd, 0, SEEK_SET);
	file_ptr = get_file_ptr(fd, dict->entries);
	if (file_ptr == NULL)
	{
		if (dict->entries != NULL)
			free(dict->entries);
		return ;
	}
	process_file(file_ptr, dict);
}

t_dict	load_dict(const char *filename)
{
	t_dict	dict;
	int		fd;
	int		line_count;

	dict = init_dict();
	fd = open_file(filename);
	if (fd == -1)
		return (dict);
	line_count = count_lines(fd);
	allocate_and_read_file(fd, &dict, line_count);
	return (dict);
}
