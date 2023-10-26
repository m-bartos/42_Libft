/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:19:36 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/26 16:13:09 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	char	str[] = "ahoj ahoj ahoj";
	char	str2[] = "bonjour";
	char	*new_str;
	char	*new_str2;

	new_str = ft_strchr(str2, 'b' + 256 + 128 + 128);
	new_str2 = strchr(str2, 'b' + 256 + 128 + 128);
	printf("Original:%s\n", str);
	printf("Found ft_strchr:%s\n", new_str);
	printf("Found    strchr:%s\n", new_str2);
	return (0);
}