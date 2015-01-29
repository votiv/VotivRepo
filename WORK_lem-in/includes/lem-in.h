/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem-in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 16:03:17 by ovisky            #+#    #+#             */
/*   Updated: 2015/01/29 15:31:13 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEMIN_H
# define LEMIN_H

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

typedef	struct			s_room
{
	char				*id;		/*the name of the room*/
	char				*posx;		/*its x position*/
	char				*posy;		/*its y position*/
	int					num_of_lem;	/*number of lemmings currently in this room*/
	int					is_start;
	int					is_end;		/*0 = false, 1 = true*/
	struct s_room		*next;
}t_room_t,				*t_room_p;	/*t_room type, t_room pointer   ???  */

typedef	struct			s_adjlist
{
	int					num_members;	/*members in the list (for future use)*/
	t_room_t			*head;			/*this probably is the same as the is_start in s_room*/
}t_adjlist_t,			*t_adjlist_p;

typedef	struct			s_graps
{
	int					num_vertices;	/*number of tubes*/
	t_adjlist_p			adjlist_arr;	/*adjacency lists' array*/
}t_graph_t,				*t_graph_p;

typedef	struct			s_lemming
{
	char				*name;
	struct s_lemming	*next;
	t_room_t			*room;
	int					moves;
}						t_lemming;

#endif
