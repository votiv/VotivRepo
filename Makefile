NAME =		test_libft
FILES =		main_libft.c

SOURCES = 	$(FILES)
OBJECTS =	$(SOURCES:%.c=.obj/%.o)

CC =		gcc
FLAGS =		-Wall -Werror -Wextra
INCLUDE =	-I Libft
LIB =		-L Libft -lft

all:	$(NAME)

$(NAME): lib $(OBJECTS) 
		@$(CC) $(OBJECTS) $(INCLUDE) $(FLAGS) $(LIB) -o $@

.obj/%.o: %.c
		@mkdir -p .obj/
		@$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@

lib:
		@make -C Libft

relib:
		@make re -C Libft

clean:
		@rm -rf .obj/
		@make clean -C Libft/

fclean:	clean
		@rm -rf $(NAME)
		@make fclean -C Libft/

re:		fclean all