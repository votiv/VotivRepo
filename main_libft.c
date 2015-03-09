#include "libft.h"
#include <stdio.h>

int     main(void)
{
    int     n;

    n = 587;
    ft_putnbr(n);
    return (0);
}

/*static char **alloc_tab(const char *s, char c)
{
size_t  i;
size_t  word_found;
size_t  word_number;
i = 0;
word_found = 0;
word_number = 0;
if (s == NULL)
return (NULL);
while (s[i] != '\0')
{
if (s[i] == c && word_found == 1)
{
word_number++;
word_found = 0;
}
if (s[i] != c)
word_found = 1;
i++;
}
if (word_found)
word_number++;
return ((char **)ft_memalloc(sizeof(char *) * (word_number + 1)));
}

int		main(void)
{
	char	**s;
    char    d[] = "this is going to work";
    int     i;

    s = alloc_tab(d, ' ');
    s = ft_strsplit(d, ' ');
    i = 0;
    while (i < 5)
    {
        printf("%s\n", s[i]);
        i++;
    }
	return (0);
}*/
