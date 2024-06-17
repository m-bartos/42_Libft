/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_e.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:26:19 by mbartos           #+#    #+#             */
/*   Updated: 2024/06/17 10:41:43 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim_e(char const *s1, char const *set)
{
	char	*new_str;

	new_str = ft_strtrim(s1, set);
	if (new_str == NULL)
	{
		perror("Libft: ");
		exit(EXIT_FAILURE);
	}
	return (new_str);
}
