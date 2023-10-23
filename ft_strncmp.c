/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:11:59 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/17 16:00:53 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 != 0 || *s2 != 0) && i < n)
	{
		if (*s1 < *s2)
			return (-1);
		else if (*s1 > *s2)
			return (1);
		s1++;
		s2++;
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