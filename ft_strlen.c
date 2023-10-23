/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:36:09 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/17 15:40:59 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*str;

	str = "";
	printf("%ld\n", ft_strlen(str));
	printf("%ld\n", strlen(str));
}
*/