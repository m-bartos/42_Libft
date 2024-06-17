/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_e.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:24:06 by mbartos           #+#    #+#             */
/*   Updated: 2024/06/17 10:41:33 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_e(const char *s1, const char *s2)
{
	char	*new_str;

	new_str = ft_strjoin(s1, s2);
	if (new_str == NULL)
	{
		perror("Libft: ");
		exit(EXIT_FAILURE);
	}
	return (new_str);
}
