/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarinko <dmarinko@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:18:54 by mganbat           #+#    #+#             */
/*   Updated: 2023/06/27 11:14:31 by dmarinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

t_dict	load_and_check_dictionary(const char *filename)
{
	t_dict	dictionary;

	dictionary = load_dict(filename);
	if (dictionary.dict_len == 0)
	{
		printf("Failed to load the dictionary.\n");
	}
	return (dictionary);
}

t_state	init_state(void)
{
	t_state	state;

	state.num_char_dict = (t_dict *)malloc(sizeof(t_dict));
	if (state.num_char_dict == NULL)
	{
		write_error();
		free(state.num_char_dict);
	}
	return (state);
}

typedef struct s_args
{
	int		argc;
	char	**argv;
	t_state	*state;
	t_dict	dictionary;
	char	*file_name;
}	t_args;

void	process_args(t_args *args, int *error)
{
	t_dict		dictionary;
	if (args->argc == 2)
	{
		args->state->number_input = ft_atoi(args->argv[1], error);
		dictionary = load_and_check_dictionary("srcs/numbers.dict");
		if (dictionary.dict_len == 0)
			return ;
		args->dictionary = dictionary;
		if (*error == 1)
			write(1, "Error\n", 6);
		else
		{
			write_number(args->state->number_input, args->dictionary.entries);
		}
	}
	if (args->argc == 3)
	{
		dictionary = load_and_check_dictionary(args->argv[1]);
		if (dictionary.dict_len == 0)
			return ;
		args->dictionary = dictionary;
		args->state->number_input = ft_atoi(args->argv[2], error);
		if (*error == 1)
			write(1, "Error\n", 6);
		else
		{
			write_number(args->state->number_input, args->dictionary.entries);
		}
	}
}

int	main(int argc, char *argv[])
{
	t_state		state;
	int			error;
	int			i;
	t_args		args;

	error = 0;
	state = init_state();
	if (state.num_char_dict == NULL)
		return (1);
	args.argc = argc;
	args.argv = argv;
	args.state = &state;
	process_args(&args, &error);
	i = -1;
	while (++i < args.dictionary.dict_len)
		free(args.dictionary.entries[i].value);
	free(args.dictionary.entries);
	free(state.num_char_dict);
	return (0);
}
