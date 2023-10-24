/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:36:43 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 10:10:03 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	dest1[5] = "0123";
	char	src1[] = "456789";
	int		result1;

	result1 = ft_strlcat(dest1, src1, 1);
	printf("%d, %s\n", result1, dest1);
	return (0);
}
