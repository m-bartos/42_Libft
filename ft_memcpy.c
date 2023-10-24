/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:18:14 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/23 13:38:08 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*new_src;
	char		*new_dest;

	new_src = src;
	new_dest = dest;
	while (n--)
		*new_dest++ = *new_src++;
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>
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
*/