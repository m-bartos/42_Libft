/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:09:17 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/17 15:37:34 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int		test;
	int		real_test;
	char	test_char;

	test_char = 127;
	test = ft_isprint(test_char);
	real_test = isprint(test_char);
	printf("%d \n %d \n", test, real_test);
	return (0);
}
*/