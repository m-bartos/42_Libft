/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:00:19 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 14:38:18 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	*str = "0123jjjj456j78j9jj";
	char	charset = 'j';
	char	**array;
	int		i;

	array = ft_split(str, charset);
	i = 0;
	while (array[i] != 0)
	{
		printf("%s\n", array[i]);
		i++;
	}
	return (0);
}
