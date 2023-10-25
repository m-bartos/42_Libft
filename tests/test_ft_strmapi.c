/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:44:11 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/25 10:51:47 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

char	add_one(unsigned int i, char c)
{
	return (c + i);
}

int	main (void)
{
	char	str[] = "AAAAAAA";
	char	*new_str;

	new_str = ft_strmapi(str, add_one);
	printf("%s\n", new_str);
	return (0);
}