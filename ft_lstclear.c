/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:09:43 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/26 14:24:29 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*old_node;
	t_list	*actual_node;

	actual_node = *lst;
	while (actual_node->next != NULL)
	{
		old_node = actual_node;
		actual_node = actual_node->next;
		(*del)(old_node);
	}
	(*del)(actual_node);
	*lst = NULL;
}
