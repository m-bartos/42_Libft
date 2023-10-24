/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:18:01 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 10:08:34 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	char	str[] = "ahoj ahoj ahoj";
	char	*new_str;

	new_str = ft_memchr(str, 'h', 2);
	printf("Original:%s\n", str);
	printf("Found ft_memchr:%s\n", new_str);
	new_str = memchr(str, 'h', 2);
	printf("Found memchr:%s\n", new_str);
	return (0);
}