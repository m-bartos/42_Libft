/* header */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char*) s;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "ahoj ahoj ahoj";
	char	*new_str;

	new_str = ft_strchr(str, 'K');
	printf("Original:%s\n", str);
	printf("Found:%s\n", new_str);
	return (0);
}
*/