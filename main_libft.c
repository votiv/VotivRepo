#include "libft.h"
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(void)
{
    int     num;
    char    *s;

    num = -100000000;
    s = ft_itoa(num);
    printf("%s\n", s);
    return (0);
}
