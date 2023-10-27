/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:46:57 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/27 11:57:28 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include<stdint.h>
#include<stdio.h>

int	main(void)
{
	char	*test;
	char	*test2;

	test = calloc(2147483648, 0);
	test2 = ft_calloc(2147483648, 0);
	printf("%p\n%p\n", test, test2);
	return (0);
}
