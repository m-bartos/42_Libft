/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:48:28 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 10:06:54 by mbartos          ###   ########.fr       */
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

	test_char = ' ';
	test = ft_isalnum(test_char);
	real_test = isalnum(test_char);
	printf("%d \n %d \n", test, real_test);
	return (0);
}
