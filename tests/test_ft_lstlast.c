/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstlast.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:37:13 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/26 12:40:12 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

// cc ./tests/test_ft_lstlast.c ft_lstlast.c ft_lstnew.c ft_lstadd_front.c && ./a.out  

int	main(void)
{
	t_list	*A;
	t_list	*B;
	t_list	*C;
	t_list	*first;
	t_list	*last;

	A = ft_lstnew("aaa");
	B = ft_lstnew("bbb");
	C = ft_lstnew("ccc");
	first = C;
	ft_lstadd_front(&first, B);
	ft_lstadd_front(&first, A);

	last = ft_lstlast(first);
	printf("%p\n%p\n%p\n%p\n", A, B, C, last);
	return (0);
}