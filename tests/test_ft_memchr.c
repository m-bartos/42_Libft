/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:18:01 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/30 13:53:30 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

// cc -Wall -Wextra -Werror ./tests/test_ft_memchr.c ft_memchr.c ft_strlen.c && ./a.out 

int	main(void)
{
	char	str[] = "ahoj ahoj ahoj";
	char	*new_str;

	new_str = ft_memchr(0x7ffde1690c60, 123, 0);
	printf("Original:%s\n", str);
	printf("Found ft_memchr:%s\n", new_str);
	new_str = memchr(0x7ffde1690c60, 123, 0);
	printf("Found memchr:%s\n", new_str);
	return (0);
}
