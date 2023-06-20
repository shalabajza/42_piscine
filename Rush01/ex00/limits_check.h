/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   limits_check.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljiriste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:51:05 by ljiriste          #+#    #+#             */
/*   Updated: 2023/06/18 20:51:07 by ljiriste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIMITS_CHECK_H
# define LIMITS_CHECK_H

int	count_front(int *array, int n);
int	count_rear(int *array, int n);
int	limits_check(int *array, int start, int end, int n);

#endif
