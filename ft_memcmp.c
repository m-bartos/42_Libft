/* header */

#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	str1 = (char*) s1;
	str2 = (char*) s2;
	i = 0;
	while ((*str1 != 0 || *str2 != 0) && i < n)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[] = "aBoj ahoj ahoj";
	char	str2[] = "aBoj CCC";
	int		new_str;

	new_str = ft_memcmp(str1, str2, 50);
	printf("Original:%s\n", str1);
	printf("Found ft_memcmp:%d\n", new_str);
	new_str = memcmp(str1, str2, 50);
	printf("Found memcmp:%d\n", new_str);
	return (0);
}
*/