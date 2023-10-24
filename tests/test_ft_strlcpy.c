/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:35:30 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 10:10:12 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	dest1[20];
	char	src1[] = "0123456789";
	int		result1;

	result1 = ft_strlcpy(dest1, src1, 3);
	printf("%d, %s\n", result1, dest1);
	return (0);
}
