/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_utils2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 14:37:56 by mbartos           #+#    #+#             */
/*   Updated: 2024/06/29 14:38:55 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_arrdup(char **arr)
{
	size_t	i;
	char	**new_arr;

	new_arr = (char **) malloc((ft_len_of_arr(arr) + 1) * sizeof(char *));
	if (new_arr == NULL)
		return (NULL);
	i = 0;
	while (arr[i])
	{
		new_arr[i] = ft_strdup(arr[i]);
		i++;
	}
	new_arr[i] = NULL;
	return (new_arr);
}
