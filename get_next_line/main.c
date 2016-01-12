
#include "get_next_line.h"
#include <stdio.h>

int		main() {
	
	int		fd;
	char	*line;
	
	fd = open("./filename.txt", O_RDONLY);
	if (fd < 0) {
		printf("Error when opening file!");
		return (-1);
	}
	while (get_next_line(fd, &line) != 0) {
		printf("%s", line);
	}
	return 0;
}