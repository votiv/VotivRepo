/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 08:12:28 by ovisky            #+#    #+#             */
/*   Updated: 2015/02/18 18:38:50 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUISSANCE_H
# define PUISSANCE_H

typedef	struct	s_board
{
		int			col;
		int			row;

		int			**board;
}					t_board;

typedef	struct		s_player
{
		char		piece;
}					t_player;

typedef	struct		s_state
{
		t_board		board;
		t_player	human;
		t_player	comp;
		int			done;
}					t_state;

#endif
