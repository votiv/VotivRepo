/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 15:18:29 by ovisky            #+#    #+#             */
/*   Updated: 2015/01/29 16:37:55 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/
#include "lem-in.h"
#include "graph.h"

t_room_p	create_room(char *room_number)
{
	t_room_p	new_room;

	new_room = (t_room_p)malloc(sizeof(t_room_t));
	new_room->id = room_number;
	new_room->next = NULL;
	return (new_room);
}

t_graph_p		create_graph(int n)
{
	int			i;
	t_graph_p	graph;

	graph = (t_graph_p)malloc(sizeof(t_graph_t));
	graph->num_vertices = n;
	graph->adjlist_arr = (t_adjlist_p)malloc(n * sizeof(t_adjlist_t));
	i = 0;
	while (i < n)
	{
		graph->adjlist_arr[i].head = NULL;
		graph->adjlist_arr[i].num_members = 0;
		i++;
	}
	return (graph);
}

void	add_edge(t_graph_t *graph, int src, char *room_number)
{
	/*add an edge from src to room_number int the adjancency list*/
	t_room_p	new_room;

	new_room = create_room(room_number);
	new_room->next = graph->adjlist_arr[src].head;
	graph->adjlist_arr[ft_atoi(room_number)].head = new_room; /* itoa */
	graph->adjlist_arr[ft_atoi(room_number)].num_members++;
}

void	display_graph(t_graph_p graph)
{
	int		i;
	t_room_p	adjlist_pointer;

	i = 0;
	while (i < graph->num_vertices)
	{
		adjlist_pointer = graph->adjlist_arr[i].head;
		printf("\n%d: ", i);
		while (adjlist_pointer)
		{
			printf("%s->", adjlist_pointer->id);
			adjlist_pointer = adjlist_pointer->next;
			printf("NULL\n");
		}
		i++;
	}
}

int		main(void)
{
	t_graph_p	graph;

	graph = create_graph(5);
	add_edge(graph, 0, "1");
	add_edge(graph, 0, "4");
	add_edge(graph, 1, "2");
	add_edge(graph, 1, "3");
	add_edge(graph, 1, "4");
	add_edge(graph, 2, "3");
	add_edge(graph, 3, "4");
	display_graph(graph);
	return (0);
}
