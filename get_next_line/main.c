
#include "get_next_line.h"
#include <stdio.h>

int		main() {
	
	int		fd, ret;
	char	*line;
	
	line = (char *) ft_memalloc(sizeof(*line) * BUFF_SIZE);
	fd = open("./filename.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("Error when opening file!");
		return (-1);
	}
	/*printf("funk: %d\n", get_next_line(fd, &line));*/
	while ((ret = get_next_line(fd, &line)) != 0)
	{
		printf("%s", line);
	}
	return 0;
}