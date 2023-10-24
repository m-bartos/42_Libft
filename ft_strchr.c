/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:19:36 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/23 16:44:13 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *) s;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "ahoj ahoj ahoj";
	char	str2[] = "bonjour";
	char	*new_str;

	new_str = ft_strchr(str2, '\0');
	printf("Original:%s\n", str);
	printf("Found:%s\n", new_str);
	return (0);
}
*/