#include "libft.h"
#include <ctype.h>

int		main()
{
	char	*atoistr, *alnum;
	int		atoi_actual, atoi_expected;
	int		actual, expected;
	char	c;

// atoi
	atoistr = "129723";
	atoi_actual = ft_atoi(atoistr);
	atoi_expected = atoi(atoistr);
	if (atoi_actual == atoi_expected)
		printf("OK\n");
	else
		printf("atoi ERROR! Expected: %d, actual: %d\n", (int) atoi_expected, (int) atoi_actual);

// 	isalpha
	c = '1';
	actual = ft_isalpha(c);
	expected = isalpha(c);
	if (actual == expected)
		printf("OK\n");
	else
		printf("isalpha ERROR! Expected: %d, actual: %d\n", expected, actual);

// isdigit	
	c = 49;
	actual = ft_isdigit(c);
	expected = isdigit(c);
	if (actual == expected)
		printf("OK\n");
	else
		printf("isdigit ERROR! Expected: %d, actual: %d\n", expected, actual);

// isalnum	
	alnum = "lol123rofl90";
	for (int i = 0; i < (int) ft_strlen(alnum); i++)
	{
		if (ft_isalnum(alnum[i]) != 1)
		{
			printf("isalnum ERROR! %c is not alphanumeric!\n", alnum[i]);
			break ;
		}
	}
	printf("OK\n");

// isascii
	c = '\n';
	actual = ft_isascii(c);
	expected = isascii(c);
	if (actual == expected)
		printf("OK\n");
	else
		printf("isascii ERROR! Expected: %d, actual: %d\n", expected, actual);

// isprint
	c = 'a';
	actual = ft_isprint(c);
	expected = isprint(c);
	if (expected > 0 && actual > 0)
		printf("OK\n");
	else
		printf("isprint ERROR! Expected: %d, actual: %d\n", expected, actual);

// toupper
	alnum = "lol123rofl90";
	for (int i = 0; i < (int) ft_strlen(alnum); i++)
	{
		if (ft_toupper(alnum[i]) != toupper(alnum[i]))
		{
			printf("toupper ERROR! at %c\n", alnum[i]);
			break ;
		}
	}
	printf("OK\n");

// tolower
	alnum = "LOL123ROFL90";
	for (int i = 0; i < (int) ft_strlen(alnum); i++)
	{
		if (ft_tolower(alnum[i]) != tolower(alnum[i]))
		{
			printf("tolower ERROR! at %c\n", alnum[i]);
			break ;
		}
	}
	printf("OK\n");
	return 0;
}