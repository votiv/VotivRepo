char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;

	if (s != NULL)
	{
		ret = malloc(sizeof(char) * ft_strlen(s) + 1);
		if (ret == NULL)
			return (NULL);
		while (s)
		{
			ret[i] = f(s[i]);
			i++;
		}
	}
	ret[i] = '\0';
	return (ret);
}