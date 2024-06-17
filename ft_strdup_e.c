/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_e.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:25:05 by mbartos           #+#    #+#             */
/*   Updated: 2024/06/17 10:41:24 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_e(const char *s1)
{
	char	*new_str;

	new_str = ft_strdup(s1);
	if (new_str == NULL)
	{
		perror("Libft: ");
		exit(EXIT_FAILURE);
	}
	return (new_str);
}
