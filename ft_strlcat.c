/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:36:43 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/23 15:46:11 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	length_dest;
	char	*source;

	length_dest = ft_strlen(dest);
	source = (char *) src;
	i = 0;
	while (source[i] && ((i + 1) < size))
	{
		dest[length_dest + i] = source[i];
		i++;
	}
	if (size)
		dest[length_dest + i] = 0;
	return (ft_strlen(dest) + ft_strlen(src));
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	dest1[5] = "0123";
	char	src1[] = "456789";
	int		result1;

	result1 = ft_strlcat(dest1, src1, 1);
	printf("%d, %s\n", result1, dest1);
	return (0);
}
*/