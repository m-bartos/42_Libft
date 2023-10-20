/* add header 
*/

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*new_s;

	new_s = s;
	i = 0;
	while (i < n)
	{
		new_s[i] = 0;
		i++;
	}
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str[] = "Ahoj jak se mas";

	printf("%s\n", str);
	ft_bzero(str, strlen(str));
	printf("%s\n", str);
	bzero(str, strlen(str));
	printf("%s\n", str);
}
*/

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str[5] = {10, 11, 12, 13, 14};
	int		i;

	i = 0;
	while (i < 5)
	{
		printf("%d\n", str[i++]);
	}
	ft_bzero(str, sizeof(str));
	i = 0;
	while (i < 5)
	{
		printf("%d\n", str[i++]);
	}
	str[0] = 10;
	str[1] = 11;
	str[2] = 12;
	str[3] = 13;
	str[4] = 14;
	bzero(str, sizeof(str));
	i = 0;
	while (i < 5)
	{
		printf("%d\n", str[i++]);
	}
}
*/