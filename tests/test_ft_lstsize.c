/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstsize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:24:58 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/26 12:25:19 by mbartos          ###   ########.fr       */
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
	first = C;
	ft_lstadd_front(&first, B);
	ft_lstadd_front(&first, A);

	count = ft_lstsize(first);
	printf("%d", count);
	return (0);
}
