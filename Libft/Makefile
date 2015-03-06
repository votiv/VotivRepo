NAME =		libft.a
SOURCES =	ft_memdel.c		ft_bzero.c\
			ft_strnew.c		ft_isalnum.c\
			ft_strclr.c		ft_isalpha.c\
			ft_strdel.c		ft_isascii.c\
			ft_striter.c	ft_isdigit.c\
			ft_striteri.c	ft_isprint.c\
			ft_strmap.c		ft_memccpy.c\
			ft_strlen.c		ft_memchr.c\
			ft_memalloc.c	ft_memcmp.c\
			ft_strmapi.c	ft_memcpy.c\
			ft_strequ.c		ft_memset.c\
			ft_strnequ.c	ft_strsplit.c\
			ft_tolower.c\
			ft_putstr.c\
			ft_putchar.c\
			ft_strsub.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_isspace.c\
			ft_strcpy.c\
			ft_toupper.c

OBJECTS =	$(SOURCES:.c=.o)

CC=gcc
FLAGS =		-Wall -Werror -Wextra -pedantic
INCLUDE =	-I.

all:	$(NAME)

$(NAME): $(OBJECTS) 
		@ar rc $(NAME) $(OBJECTS)

%.o: %.c
		@$(CC) -c $< -o $@ $(FLAGS) -I.

clean:
		@rm -f $(OBJECTS)

fclean:	clean
		@rm -rf $(NAME)

re:		fclean all