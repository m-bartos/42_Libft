/* add header 
*/

#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	int				i;
	unsigned char	*new_str;

	new_str = str;
	i = 0;
	while (i < n)
	{
		new_str[i] = c;
		i++;
	}
	return(new_str);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str[] = "Ahoj jak se mas";

	printf("%s\n", str);
	ft_memset(str, 67, strlen(str));
	printf("%s\n", str);
	memset(str, 'B', strlen(str));
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
	ft_memset(str, 67, sizeof(str));
	i = 0;
	while (i < 5)
	{
		printf("%d\n", str[i++]);
	}
	memset(str, 0, sizeof(str));
	i = 0;
	while (i < 5)
	{
		printf("%d\n", str[i++]);
	}
}
*/