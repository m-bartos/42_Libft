/* header */

#include <stddef.h>

int	ft_is_str_in_str(char *str, char *to_find, size_t len)
{
	size_t	i;

	i = 0;
	while (to_find[i] && i < len)
	{
		if (str[i] == to_find [i])
			i++;
		else
			return (0);
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		is_inside;
	char	*str;
	char	*to_find;

	str = (char*) big;
	to_find = (char*) little;
	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i] != 0)
	{
		if (str[i] == to_find[0])
		{
			is_inside = ft_is_str_in_str(&str[i], to_find, len);
			if (is_inside == 1)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*
#include<stdio.h>
int	main(void)
{
	char	test[] = "hihahihahahia";
	char	to_find_str[] = "hahaha";
	char	*new_string;
	int		max = 4;

	new_string = ft_strnstr(test, to_find_str, max);
	printf("%s", new_string);
	return (0);
}
*/