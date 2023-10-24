/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:01:33 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 13:05:39 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

// cc -Wall -Wextra -Werror ./tests/test_ft_substr.c ft_substr.c && ./a.out 

int	main(void)
{
	char	str[] = "ABCDEFGHIJKLMNOP";
	char	*new_str;

	new_str = ft_substr(str, 5, 5);
	printf("%s\n", new_str);
}
