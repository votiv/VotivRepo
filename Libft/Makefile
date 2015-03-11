NAME =		libft.a
SOURCES =	ft_memdel.c		ft_bzero.c			ft_strcat.c\
			ft_strnew.c		ft_isalnum.c		ft_strchr.c\
			ft_strclr.c		ft_isalpha.c		ft_strlcat.c\
			ft_strdel.c		ft_isascii.c		ft_strncat.c\
			ft_striter.c	ft_isdigit.c		ft_strncmp.c\
			ft_striteri.c	ft_isprint.c		ft_strncpy.c\
			ft_strmap.c		ft_memccpy.c		ft_strnstr.c\
			ft_strlen.c		ft_memchr.c			ft_strrchr.c\
			ft_memalloc.c	ft_memcmp.c			ft_strstr.c\
			ft_strmapi.c	ft_memcpy.c			ft_strcmp.c\
			ft_strequ.c		ft_memset.c			ft_strcpy.c\
			ft_strnequ.c	ft_strsplit.c		ft_lstnew.c\
			ft_tolower.c	ft_putendl.c		ft_memdup.c\
			ft_putstr.c		ft_putnbr.c			ft_lstdelone.c\
			ft_putchar.c	ft_reverse.c		ft_lstdel.c\
			ft_strsub.c		ft_itoa.c			ft_lstadd.c\
			ft_strjoin.c	ft_putchar_fd.c		ft_lstiter.c\
			ft_strtrim.c	ft_putstr_fd.c		ft_lstmap.c\
			ft_isspace.c	ft_putendl_fd.c\
			ft_strcpy.c		ft_putnbr_fd.c\
			ft_toupper.c	ft_atoi.c\
			ft_strdup.c		ft_memmove.c

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