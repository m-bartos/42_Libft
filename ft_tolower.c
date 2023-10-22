/*header*/


int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char	a;
	char	b;

	a = 'z';
	b = 'z' + 1;
	printf("%d\n", toupper(a));
	printf("%d\n", toupper(b));
	printf("%d\n", ft_toupper(a));
	printf("%d\n", ft_toupper(b));
	return (0);
}
*/