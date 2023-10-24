/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:11:59 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/23 16:18:28 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while ((*str1 != 0 || *str2 != 0) && i < n)
	{
		if (*str1 < *str2)
			return (-1);
		else if (*str1 > *str2)
			return (1);
		str1++;
		str2++;
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	int test;
	int real_test;
	char *str1 = "ahoj1";
	char *str2 = "ahoj";
	int n_char = 10;

	test = ft_strncmp(str1, str2, n_char);
	real_test = ft_strncmp(str1, str2, n_char);
	printf("%d \n %d \n", test, real_test);
	return (0);
}
*/