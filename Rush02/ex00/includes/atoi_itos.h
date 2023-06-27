/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_itos.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseykora <mseykora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:12:22 by mseykora          #+#    #+#             */
/*   Updated: 2023/06/25 21:48:56 by mseykora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATOI_ITOS_H
# define ATOI_ITOS_H

int				ft_is_space(char c);
unsigned int	ft_atoi(char *str, int *error_code);
char			*ft_itos(unsigned int nbr);

#endif
