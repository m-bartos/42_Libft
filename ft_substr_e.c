/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_e.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:25:37 by mbartos           #+#    #+#             */
/*   Updated: 2024/06/17 10:41:56 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr_e(const char *s1, unsigned int start, size_t len)
{
	char	*new_str;

	new_str = ft_substr(s1, start, len);
	if (new_str == NULL)
	{
		perror("Libft: ");
		exit(EXIT_FAILURE);
	}
	return (new_str);
}
