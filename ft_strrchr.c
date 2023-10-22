/* header */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	*ptr_found;

	ptr_found = 0;
	str = (char*) s;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			ptr_found = &str[i];
		i++;
	}
	return (ptr_found);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "ahoj ahoj ahoj";
	char	*new_str;

	new_str = ft_strrchr(str, 'K');
	printf("Original:%s\n", str);
	printf("Found:%s\n", new_str);
	return (0);
}
*/