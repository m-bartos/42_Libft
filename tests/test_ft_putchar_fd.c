/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:50:04 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/25 13:51:43 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// cc -Wall -Wextra -Werror ./tests/test_ft_putchar_fd.c ft_putchar_fd.c && ./a.out 

int	main(void)
{
	ft_putchar_fd('a', 1);
}
