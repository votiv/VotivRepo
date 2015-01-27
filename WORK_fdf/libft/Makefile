NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_memcpy.c ft_memccpy.c ft_memcmp.c ft_memchr.c ft_memmove.c ft_memset.c \
ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlen.c \
ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnstr.c ft_strrchr.c ft_strstr.c ft_tolower.c ft_toupper.c \
ft_putstr.c ft_putchar.c ft_putnbr.c ft_itoa.c ft_putendl.c ft_memalloc.c ft_strsplit.c

OBJ = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -W -Werror -Wextra
LDFLAGS = -L.
LDLIBS = -lft
RM = rm -rf

$(NAME):$(OBJ)
		$(CC) $(CFLAGS) -c $(SRCS) $(HDDIRS)
		ar rc $(NAME) $(OBJ)	
		ranlib $(NAME)
all:$(NAME)

clean:
		$(RM) $(OBJ)

fclean:clean
		$(RM) $(NAME)
		
re:fclean all
