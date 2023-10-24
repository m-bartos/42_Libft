/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:19:43 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 10:10:46 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "../libft.h"

int	main(void)
{
	char	test[] = "hihahihahahia";
	char	to_find_str[] = "hahaha";
	char	*new_string;
	int		max = 4;

	new_string = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	printf("%s", new_string);
	return (0);
}
