/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:19:22 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/23 13:38:12 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*new_src;
	char		*new_dest;

	new_src = src;
	new_dest = dest;
	if (new_dest < new_src)
	{
		while (n--)
			*new_dest++ = *new_src++;
	}
	else
	{
		while (n--)
			new_dest[n] = new_src[n];
	}
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	dest[] = "ABCDEFGHIJKL";
	char	dest_a[] = "ABCDEFGHIJKL";

	printf("%s\n", dest);
	ft_memmove(dest, dest, 5);
	printf("%s\n", dest);
	memmove(dest_a, dest_a, 5);
	printf("%s\n", dest_a);
	return(0);
}
*/