/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:04:03 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/25 11:05:47 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

void	add_one(unsigned int i, char *s)
{
	*s = *s + 1;
}

int	main (void)
{
	char	str[] = "BBB";

	ft_striteri(str, add_one);
	printf("%s\n", str);
	return (0);
}