/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_column.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 18:25:46 by ovisky            #+#    #+#             */
/*   Updated: 2015/02/18 18:38:48 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance.h"

int		check_column(char *line)
{
	if (!is_col_ok(line))
	{
		ft_putendl("Enter the number of the column you want to play!");
		return (-1);
	}

}
