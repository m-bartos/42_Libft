/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:19:52 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/25 13:59:30 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	char	str[] = "";
	char	str2[] = "bonjour";
	char	to_find = 'b';
	char	*new_str;
	char	*new_str2;

	new_str = ft_strrchr(str, to_find);
	new_str2 = strrchr(str, to_find);
	printf("Original:|%s|\n", str);
	printf("Found ft_strrchr:|%s|\n", new_str);
	printf("Found    strrchr:|%s|\n", new_str2);
	return (0);
}
