/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_empty.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:47:11 by mbartos           #+#    #+#             */
/*   Updated: 2024/06/27 22:08:06 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_of_strs_empty(char *str, char c)
{
	int	i;
	int	n_words;

	n_words = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != 0)
			n_words++;
		i++;
	}
	return (n_words);
}

char	*str_add_empty(char *str, char c, int *index)
{
	int		length;
	char	*word;
	int		c_end;

	c_end = 0;
	length = 0;
	while (str[length])
	{
		if (str[length] == c)
		{
			c_end = 1;
			break ;
		}
		length++;
	}
	*index = *index + length + c_end;
	word = ft_substr_e(str, 0, length);
	return (word);
}

char	**ft_split_empty(char const *s, char c)
{
	char	*str;
	char	**array;
	int		i;
	int		j;

	str = (char *) s;
	if (str == NULL)
		return (NULL);
	array = (char **) malloc(sizeof(char *) * (num_of_strs_empty(str, c) + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		array[j] = str_add_empty(&str[i], c, &i);
		j++;
	}
	array[j] = NULL;
	return (array);
}
