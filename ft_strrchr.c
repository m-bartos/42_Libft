/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:19:52 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/25 12:09:20 by mbartos          ###   ########.fr       */
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
	if (str[0] == '\0' && c != '\0')
		return (NULL);
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
