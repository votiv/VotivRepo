# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ovisky <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/27 14:20:24 by ovisky            #+#    #+#              #
#    Updated: 2014/11/27 14:20:25 by ovisky           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRCS = fdf_main.c get_next_line.c

OBJ = $(SRCS:.c=.o)
CC = gcc -O
CFLAGS = -W -Werror -Wextra
RM = rm -rf

all:
	$(CC) $(CFLAGS) -I libft/ -c $(SRCS) 
	gcc -o $(NAME) fdf_main.o get_next_line.o -L/usr/X11/lib -lmlx -lXext -lX11 -L libft/ -lft

clean:
		$(RM) $(OBJ)

fclean:clean
		$(RM) $(NAME)
		
re:fclean all
