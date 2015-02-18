/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 08:12:39 by ovisky            #+#    #+#             */
/*   Updated: 2015/02/18 18:25:58 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance.h"
#include <stdlib.h>

void	print_board()
{

}

int		go_human()
{
	char	*line;
	int		ret;

	ret = -1;
	print_board(state->board);
	ft_putstr("It's your turn, enter a column ");
	if (state->human.piece == 'O')
		ft_putendl("O: ");
	else
		ft_putendl("X: ");
	while (ret != 1 && get_next_line(0, &line) > 0)
	{
		ret = check_column(line); // itt vagyok 18/02___19:25
		if (ret == -2)
			return (-1);
		free(line);
	}
	return (1);
}

int		go_play(t_state state)
{
	char	c;
	char	piece;

	if (check_full(state->board))
	{
		print_board(state->board);
		ft_putendl("It's a tie!");
		return (-1);
	}
	// some error checking on the players maybe?
	if (state->turn == 0)
		if(go_comp() == -1)
			return (-1);
	if(state->turn == 1)
		if (go_human() == -1)
			return (-1);
	c = (state->turn == 0) ? state->comp.piece : state->human.piece;
	if ((piece = check_win(state->board, c, 4)) != ' ')
	{
		print_board(state->board);
		// who won?
		return (-1);
	}
	state->turn = (state->turn == 0) ? 1 : 0;
}

int		main(int ac, char **av)
{
	t_state	state;
	char	*line;

	go_play(state);
}
