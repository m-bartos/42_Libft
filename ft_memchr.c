/* header */

#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char*) s;
	i = 0;
	while (i < n)
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

	new_str = ft_memchr(str, 'h', 2);
	printf("Original:%s\n", str);
	printf("Found ft_memchr:%s\n", new_str);
	new_str = memchr(str, 'h', 2);
	printf("Found memchr:%s\n", new_str);
	return (0);
}
*/