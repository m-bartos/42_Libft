/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:09:17 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 10:08:06 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft.h"

int	main(void)
{
	int		test;
	int		real_test;
	char	test_char;

	test_char = 50;
	test = ft_isascii(test_char);
	real_test = isascii(test_char);
	printf("%d \n %d \n", test, real_test);
	return (0);
}
