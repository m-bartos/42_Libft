/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:18:08 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 10:08:49 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

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