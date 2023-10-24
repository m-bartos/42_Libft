/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:19:36 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 10:09:43 by mbartos          ###   ########.fr       */
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

	new_str = ft_strchr(str2, '\0');
	printf("Original:%s\n", str);
	printf("Found:%s\n", new_str);
	return (0);
}
