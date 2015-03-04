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
	/*void	*s;
	char	*d;
	char	*e;*/

	char *sample_strings[] =
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
    }
	return (0);
}