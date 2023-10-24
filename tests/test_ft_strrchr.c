/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:19:52 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 10:11:00 by mbartos          ###   ########.fr       */
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

	new_str = ft_strrchr(str2, '\0');
	printf("Original:%s\n", str);
	printf("Found:%s\n", new_str);
	return (0);
}
