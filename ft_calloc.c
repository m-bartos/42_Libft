/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:21:32 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/26 18:00:27 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*memory;

	memory = (unsigned char *) malloc(count * size);
	if (memory == NULL)
		return (NULL);
	ft_bzero(memory, count * size);
	return ((void *) memory);
}
