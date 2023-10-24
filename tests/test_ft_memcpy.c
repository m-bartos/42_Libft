/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:18:14 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 10:08:59 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	dest[] = "ABCDEFGHIJKL";
	char	dest_a[] = "ABCDEFGHIJKL";

	printf("original:  %s\n", dest);
	ft_memcpy(dest_a + 2, dest_a, 8); //problem with overlaping - OK
	printf("ft_memcpy: %s\n", dest_a);
	memcpy(dest + 2, dest, 8); //not problem with overlaping? WHY? NOK!
	printf("memcpy:    %s\n", dest);
	return(0);
}