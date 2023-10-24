/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:11:59 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 10:10:34 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

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
