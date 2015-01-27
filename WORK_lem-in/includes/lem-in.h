/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem-in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 16:03:17 by ovisky            #+#    #+#             */
/*   Updated: 2015/01/27 16:42:47 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEMIN-IN_H
# define LEMIN-IN_H

/* basic directed graph type
 * the implementation uses adjacency lists
 * represented as variable-length arrays
 *
 * these arrays may or may not be sorted: if one gets long enough
 * and you call graph_has_egde on its source, it will be
 */

#include <stdlib.h>

typedef	struct		s_graph
{
	int				num_rooms;	/*number of rooms*/
	int				num_tubes;	/*number of tubes*/
	struct			successors
	{
		int			num_suc;	/*number of successors*/
		int			len;		/*number of slots in array*/
		char		is_sorted;	/*true if list is alredy sorted*/
		int			list[1];	/*actual list of successors*/
	}				*alist[1];
}					t_graph;
