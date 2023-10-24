/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:18:08 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/23 16:15:56 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
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

	printf("Original:%s\n", str1);
	new_str = ft_memcmp("t\200", "t\0", 2);
	printf("Found ft_memcmp:%d\n", new_str);
	new_str = memcmp("t\200", "t\0", 2);
	printf("Found memcmp:%d\n", new_str);
	return (0);
}
*/