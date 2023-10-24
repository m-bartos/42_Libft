/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:19:52 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/23 16:46:15 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	*ptr_found;

	ptr_found = 0;
	str = (char *) s;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			ptr_found = &str[i];
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (ptr_found);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "ahoj ahoj ahoj";
	char	str2[] = "bonjour";
	char	*new_str;

	new_str = ft_strrchr(str2, '\0');
	printf("Original:%s\n", str);
	printf("Found:%s\n", new_str);
	return (0);
}
*/