/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovisky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/06 12:00:05 by ovisky            #+#    #+#             */
/*   Updated: 2014/12/06 12:00:07 by ovisky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

#include <mlx.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include "get_next_line.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <fcntl.h>

#define CTE	0.51
#define X_START 50
#define Y_START 50

typedef	struct		s_point
{
	int				x;
	int				y;
	int				z;
}					t_point;

typedef	struct		s_env
{
	void			*mlx;
	void			*win;
}					t_env;

typedef	struct		s_matrix
{
	int				**matrix;
}					t_matrix;

#endif
