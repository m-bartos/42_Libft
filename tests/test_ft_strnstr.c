/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:19:43 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/27 12:11:11 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "../libft.h"

// cc -Wall -Wextra -Werror ./tests/test_ft_strnstr.c ft_strnstr.c ft_strlen.c && ./a.out 

int	main(void)
{
	char	test[] = "aaabcabcd";
	char	to_find_str[] = "aaabc";
	char	*new_string;
	int		max = 5;

	new_string = ft_strnstr(test, to_find_str, max);
	printf("%s", new_string);
	return (0);
}
