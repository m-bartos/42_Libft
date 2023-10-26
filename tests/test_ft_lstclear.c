/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstclear.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:16:18 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/26 14:26:55 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

// cc ./tests/test_ft_lstclear.c ft_lstclear.c ft_lstlast.c ft_lstnew.c ft_lstadd_front.c && ./a.out  

void	ft_testdel(void *content)
{
	free(content);
}

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

	ft_lstclear(&B, &ft_testdel);
	//printf("%p\n%p\n%p\n", A->next, B->next, C->next);
	return (0);
}