/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:46:57 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/26 17:16:13 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include<stdint.h>
#include<stdio.h>

int	main(void)
{
	char	*test;

	test = calloc(-5, 0);
	printf("%p", test);
	return (0);
}
