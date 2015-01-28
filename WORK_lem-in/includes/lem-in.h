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
	int		num_rooms;	/*number of rooms*/
	int		num_tubes;	/*number of tubes*/
	struct		successors
	{
		int	num_suc;	/*number of successors*/
		int	len;		/*number of slots in array*/
		char	is_sorted;	/*true if list is alredy sorted*/
		int	list[1];	/*actual list of successors*/
	}		*alist[1];
}			t_graph;

/* graph.h in another way*/

/* Adjacency list node*/
typedef	struct	adjlist_node
{
	int	vertex;			/*Index of adjacency lisst array*/
	struct	adjlist_node	*next;	/*Pointer to the next node*/
}adjlist_node_t, *adjlist_node_p;

/* Adjacency list*/
typedef	struct	adjlist
{
	int	num_members;		/*number of members in the list (for future use)*/
	adjlist_node_t	*head;		/*Head of the adjacency linked list*/
}adjlist_t, *adjlist_p;

/* Graph sturcture. A graph is an array of adjacency lists.
 * Size of array will be number of vertices in graph*/
typedef	struct	graph
{
//	graph_type_e	type;	/*this is an enum for decideing wether the graph is directed or not. i haven't implemented the enum*/
	int	num_vertices;		/* Number of vertices*/
	adjlist_p	adjListArr;	/*Adjacency lists' array*/
}graph_t, *graph_p;
