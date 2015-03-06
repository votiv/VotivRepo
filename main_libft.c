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


int		main(void)
{
	char	**s;
    int     i;
    int     j;

    s = (char **) ft_memalloc(sizeof(s) * (100));
    s = ft_strsplit("this is going to work", ' ');
    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while (s[i][j] != '\0')
        {
            printf("%c\n", s[i][j]);
            j++;
        }
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