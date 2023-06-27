/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseykora <mseykora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:06:46 by mseykora          #+#    #+#             */
/*   Updated: 2023/06/25 23:13:56 by mseykora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

char	*trim_whitespace(const char *str)
{
	const char	*end;
	size_t		trimmed_length;
	char		*trimmed_str;

	while (*str && (*str == ' ' || *str == '\t'))
		str++;
	if (*str == '\0')
		return (NULL);
	end = str + ft_strlen(str) - 1;
	while (end > str && (*end == ' ' || *end == '\t' || *end == '\n'))
		end--;
	trimmed_length = end - str + 1;
	trimmed_str = (char *)malloc(trimmed_length + 1);
	if (trimmed_str == NULL)
	{
		printf("Memory allocation failed.\n");
		return (NULL);
	}
	ft_strncpy(trimmed_str, str, trimmed_length);
	trimmed_str[trimmed_length] = '\0';
	return (trimmed_str);
}

int	count_lines(int fd)
{
	char	buffer[128];
	ssize_t	bytes_read;
	int		line_count;
	int		i;

	line_count = 0;
	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		i = 0;
		while (i < bytes_read)
		{
			if (buffer[i] == '\n')
				line_count++;
			i++;
		}
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	return (line_count);
}

void	process_line(t_dict *dict, char *line, int *i)
{
	char	*trimmed_line;
	int		key;
	char	value[256];

	trimmed_line = trim_whitespace(line);
	if (trimmed_line == NULL || ft_strlen(trimmed_line) == 0)
	{
		free(trimmed_line);
		return ;
	}
	if (sscanf(trimmed_line, "%d:%255s", &key, value) != 2)
	{
		free(trimmed_line);
		return ;
	}
	dict->entries[*i].key = key;
	dict->entries[*i].value = strdup(value);
	if (dict->entries[*i].value == NULL)
	{
		printf("Memory allocation failed.\n");
		free(trimmed_line);
		return ;
	}
	free(trimmed_line);
	(*i)++;
}

t_dict	init_dict(void)
{
	t_dict	dict;

	dict.dict_len = 0;
	dict.entries = NULL;
	return (dict);
}

int	open_file(const char *filename)
{
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		printf("Error opening file: %s\n", filename);
	}
	return (fd);
}
