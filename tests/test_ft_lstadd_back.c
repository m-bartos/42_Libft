/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstadd_back.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:01:49 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/26 13:02:05 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	t_list	*A;
	t_list	*B;
	t_list	*C;
	t_list	*first;
	int		count;

	A = ft_lstnew("aaa");
	B = ft_lstnew("bbb");
	C = ft_lstnew("ccc");
	first = A;
	ft_lstadd_back(&first, B);
	ft_lstadd_back(&first, C);

	count = ft_lstsize(first);
	printf("%d", count);
	return (0);
}
