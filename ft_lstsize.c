/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:33:17 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/26 12:33:21 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*actual_node;
	size_t	length;

	if (lst == NULL)
		return (0);
	length = 1;
	actual_node = lst;
	while (actual_node->next != NULL)
	{
		length++;
		actual_node = actual_node->next;
	}
	return (length);
}
