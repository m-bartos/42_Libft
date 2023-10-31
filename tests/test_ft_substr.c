/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:01:33 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/30 13:13:19 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

// cc -Wall -Wextra -Werror ./tests/test_ft_substr.c ft_substr.c ft_strlen.c && ./a.out 

int	main(void)
{
	char	str[] = "hola";
	char	*new_str;

	new_str = ft_substr(str, 3, 1);
	printf("%s\n", new_str);
}
