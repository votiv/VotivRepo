void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	if (s != NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(s[i]);
			i++;
		}
	}
}