#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "../Libft/libft.h"
# include <unistd.h>
# include <fcntl.h>

# define BUFF_SIZE 32

 int	get_next_line(int const fd, char **line);

#endif