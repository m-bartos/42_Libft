/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:01:36 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 13:44:42 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

// cc -Wall -Wextra -Werror ./tests/test_ft_strjoin.c ft_strjoin.c ft_strlen.c && ./a.out 

int	main(void)
{
	char	str1[] = "ABCD";
	char	str2[] = "1234";
	char	*new_str;

	new_str = ft_strjoin(str1, str2);
	printf("%s\n", new_str);
}
