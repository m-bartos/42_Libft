/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:09:17 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/17 15:28:06 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
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

	test_char = ' ';
	test = ft_isalnum(test_char);
	real_test = isalnum(test_char);
	printf("%d \n %d \n", test, real_test);
	return (0);
}
*/