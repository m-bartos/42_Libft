/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:45:36 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/25 14:45:59 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	str[] = "ab1234ba";
	char	set[] = "ab";
	char	*new_str;

	new_str = ft_strtrim(str, set);
	printf("%s\n", new_str);
	return (0);
}
