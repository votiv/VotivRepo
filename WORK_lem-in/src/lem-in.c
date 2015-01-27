/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem-in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 16:21:15 by ovisky            #+#    #+#             */
/*   Updated: 2015/01/27 16:42:40 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem-in.h"

/*creates a directed graph*/
t_graph	create_graph(int n)
{
	t_graph		g;
	int			i;

	g = malloc(sizeof(struct s_graph) + sizeof(struct successor *) * (n - 1));
	g->num_rooms = n; /*get data from command line*/
	g->num_tubes = 0; /*get data from command line*/
	i = 0;
	while (i < n)
	{
		g->alist[i] = malloc(sizeof(struct successors));
		g->alist[i]->d = 0;
		g->alist[i]->len = 1;
		g->alist[i]->is_sorted = 1;
		i++;
	}
	return (g);
}
