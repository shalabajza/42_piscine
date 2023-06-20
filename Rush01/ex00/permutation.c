/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljiriste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:39:10 by ljiriste          #+#    #+#             */
/*   Updated: 2023/06/18 21:18:47 by ljiriste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "permutation.h"

void	print_perm(struct s_perm perm)
{
	int		i;
	char	digit;

	i = 0;
	while (i < perm.n)
	{
		digit = '0' + perm.perm[i];
		write(1, &digit, 1);
		write(1, " ", 1);
		++i;
	}
	write(1, "\n", 1);
	return ;
}

// Returns the address to an array with
// elements 1, 2, ... , n
struct s_perm	create_first_perm(int n)
{
	struct s_perm	perm;
	int				i;

	perm.n = n;
	perm.perm = malloc(n * sizeof(int));
	perm.encoding = malloc(n * sizeof(int));
	i = 0;
	while (i < n)
	{
		perm.perm[i] = i + 1;
		perm.encoding[i] = 0;
		++i;
	}
	return (perm);
}

void	free_perm(struct s_perm perm)
{
	free(perm.perm);
	free(perm.encoding);
	return ;
}

void	swap(int *p1, int *p2)
{
	int	temp;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

// Advances s_perm to the next permutation
// Returns 0 when all permutations where reached
// Implementation of Heap's algorithm
int	advance_perm(struct s_perm perm)
{
	int	i;

	i = 1;
	while (i < perm.n)
	{
		if (perm.encoding[i] < i)
		{
			if (i % 2)
				swap(perm.perm + perm.encoding[i], perm.perm + i);
			else
				swap(perm.perm, perm.perm + i);
			++perm.encoding[i];
			return (1);
		}
		else
		{
			perm.encoding[i] = 0;
			++i;
		}
	}
	return (0);
}
