/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:09:17 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/23 13:37:56 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
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

	test_char = '0';
	test = ft_isdigit(test_char);
	real_test = isdigit(test_char);
	printf("%d \n %d \n", test, real_test);
	return (0);
}
*/