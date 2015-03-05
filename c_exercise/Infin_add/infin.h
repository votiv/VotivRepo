#ifndef INFIN_H
# define INFIN_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

char	*strip_minus(char *s);
int		ft_isdigit(char c);
int		ft_strlen(char	*s);
void	*ft_memalloc(size_t size);
void	ft_putstr(char *s);
char	*ft_reverse(char **s);
void	init_sum(int **sum, int len);

#endif