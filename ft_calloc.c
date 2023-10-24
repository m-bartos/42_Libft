/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:21:32 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 09:34:32 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*memory;

	memory = (unsigned char *) malloc(count * size);
	ft_memset(memory, 0, count * size);
	return ((void *) memory);
}

/*
int	main(void)
{
	char	*test;

	test = ft_calloc(5, sizeof(int));
	return (0);
}
*/