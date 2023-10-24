/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:22:37 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 09:40:30 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char			*new_str;
	char			*str;
	int				length_of_str;
	unsigned int	i;

	str = (char *) src;
	length_of_str = ft_strlen(str) + 1;
	new_str = (char *) malloc(sizeof (char) * length_of_str);
	i = 0;
	while (src[i] != 0)
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = 0;
	return (new_str);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "ahoooj";
	char	*str_dup;

	str_dup = ft_strdup(str);
	printf ("%s", str_dup);
	return (0);
}
*/