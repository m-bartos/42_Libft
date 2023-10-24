/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:19:30 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/23 13:38:15 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_s;

	new_s = s;
	i = 0;
	while (i < n)
	{
		new_s[i] = c;
		i++;
	}
	return (s);
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