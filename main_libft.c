#include "libft.h"
#include <stdio.h>

/*static void	rotone(char *s)
{
	while (*s != '\0')
	{
		if (*s == 'z' || *s == 'Z')
			ft_putchar(*s - 25);
		else if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
			ft_putchar(*s + 1);
		else
			ft_putchar(*s);
		s++;
	}
}
*/
static char **init_matrix(int len)
{
    int     i;
    char    **ret;

    i = 0;
    ret = (char **) ft_memalloc(sizeof(*ret) * (len));
    while (i < len)
    {
        ret[i] = (char *) ft_memalloc(sizeof(*ret) * len);
        i++;
    }
    return (ret);
}

int		main(void)
{
	char	**s;
    char    *d;
    int     i;

    d = (char *) ft_memalloc(sizeof(d) * 22);
    d = "this is going to work";
    s = init_matrix(100);
    s = ft_strsplit(d, 32);
    i = 0;
    while (s[i] != '\0')
    {
        printf("%s\n", s[i]);
        i++;
    }
	return (0);
}

/*char *sample_strings[] =
    {
            "nothing to trim",
            "    trim the front",
            "trim the back     ",
            "   trim one char front and back  ",
            " not ",
            " trim one char front",
            "trim one char back ",
            "                   ",
            " ",
            "a",
            "",
            NULL
    };
    char test_buffer[5564];
    int index;

    for( index = 0; sample_strings[index] != NULL; ++index )
    {
            ft_strcpy( test_buffer, sample_strings[index] );
            printf("[%s] -> [%s]\n", sample_strings[index],
                                     ft_strtrim(test_buffer));
    }*/