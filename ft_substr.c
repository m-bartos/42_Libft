/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:52:38 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 13:30:33 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	char	*sub_str_first;
	size_t	i;

	sub_str = (char *) malloc((len + 1) * sizeof(char));
	if (sub_str == NULL)
		return (NULL);
	sub_str_first = sub_str;
	i = 0;
	while (i < len)
	{
		*sub_str++ = *(s + start + i);
		i++;
	}
	*sub_str = '\0';
	return (sub_str_first);
}
