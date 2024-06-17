/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_e.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:26:41 by mbartos           #+#    #+#             */
/*   Updated: 2024/06/17 10:40:48 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_e(int n)
{
	char	*new_str;

	new_str = ft_itoa(n);
	if (new_str == NULL)
	{
		perror("Libft: ");
		exit(EXIT_FAILURE);
	}
	return (new_str);
}
