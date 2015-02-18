/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 08:12:28 by ovisky            #+#    #+#             */
/*   Updated: 2015/02/18 08:57:19 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUISSANCE_H
# define PUISSANCE_H

typedef	struct	s_grid
{
		int		x;
		int		y;

		int		**board;
}				t_boeard;

typedef	struct	s_player
{
		char	piece;
		int		turn;
}				t_player;

#endif
