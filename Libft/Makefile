NAME =		libft.a
FILES =		ft_memdel.c\
			ft_strnew.c\
			ft_strclr.c\
			ft_strdel.c\
			ft_striter.c\
			ft_striteri.c\
			ft_strmap.c\
			ft_strlen.c\
			ft_memalloc.c\
			ft_strmapi.c\
			ft_strequ.c\
			ft_strnequ.c\
			ft_tolower.c\
			ft_toupper.c\
			main_libft.c

SOURCES = 	$(FILES)
OBJECTS =	$(SOURCES:%.c=.obj/%.o)

CC=gcc
FLAGS =		-Wall -Werror -Wextra
INCLUDE =	-I.
LIB =		-L -lft

all:	$(NAME)

$(NAME): $(OBJECTS) 
		@$(CC) $(OBJECTS) $(INCLUDE) $(CFLAGS) -o $@

.obj/%.o: %.c
		@mkdir -p .obj/
		@gcc $(FLAGS) $(INCLUDE) -c $< -o $@

clean:
		@rm -rf .obj/

fclean:	clean
		@rm -rf $(NAME)

re:		fclean all