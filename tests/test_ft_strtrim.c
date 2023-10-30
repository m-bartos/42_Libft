/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:45:36 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/30 11:49:59 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

// cc -Wall -Wextra -Werror ./tests/test_ft_strtrim.c ft_strtrim.c ft_strlen.c && ./a.out 

int	main(void)
{
	char	str[] = "   xxx   xxx";
	char	set[] = " x";
	char	*new_str;

	new_str = ft_strtrim(str, set);
	printf("\nString: %s\n", new_str);
	return (0);
}
