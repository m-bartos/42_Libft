/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_e.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:28:22 by mbartos           #+#    #+#             */
/*   Updated: 2024/06/17 10:41:00 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split_e(const char *s, char c)
{
	char	**new_arr;

	new_arr = ft_split(s, c);
	if (new_arr == NULL)
	{
		perror("Libft: ");
		exit(EXIT_FAILURE);
	}
	return (new_arr);
}
