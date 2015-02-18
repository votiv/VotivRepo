/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 08:12:39 by ovisky            #+#    #+#             */
/*   Updated: 2015/02/18 08:57:26 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ouissance.h"

int		main(int ac, char **av)
{
	char	*line;
	int		col;
	int		row;
	int		turn;
	int		max_turn;

	max_turn = col * row;
	while (turn != max_turn)
	{
		print_board();
		if (turn % 2 == 0)
			player.play();
		else
			comp.play();
	}
}
