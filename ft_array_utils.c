/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:17:16 by mbartos           #+#    #+#             */
/*   Updated: 2024/06/17 10:42:15 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file array_utils.c
 * @brief Utility functions for handling arrays of strings.
 */

#include "libft.h"

/**
 * @brief Calculates the length of a null-terminated array of strings.
 * 
 * @param arr The array of strings.
 * @return The length of the array.
 */
int	ft_len_of_arr(char **arr)
{
	int	size;

	size = 0;
	if (arr == NULL)
		return (0);
	while (arr[size])
		size++;
	return (size);
}

/**
 * @brief Concatenates an null-terminated array of strings into a single string.
 * 
 * @param arr_of_strs The array of strings to concatenate.
 * @return The concatenated string.
 */
char	*ft_arr_to_str(char **arr_of_strs)
{
	char	*str;
	char	*temp_str;
	int		i;

	i = 0;
	str = NULL;
	while (arr_of_strs[i])
	{
		temp_str = str;
		str = ft_strjoin_e(str, arr_of_strs[i]);
		free(temp_str);
		i++;
	}
	return (str);
}

/**
 * @brief Initializes an null-terminated array of strings with a given size.
 * 
 * @param size The size of the array.
 * @return The initialized array.
 */
char	**ft_init_array(int size)
{
	char	**array;

	array = (char **) malloc(sizeof(char *) * (size + 1));
	if (array == NULL)
	{
		perror("Libft: ");
		exit(EXIT_FAILURE);
	}
	array[size] = NULL;
	return (array);
}

/**
 * @brief Frees memory allocated for an array of strings.
 * 
 * @param arr_of_str The array of strings to free.
 */
void	ft_free_array(char **arr_of_str)
{
	int	index;

	if (!arr_of_str)
		return ;
	index = 0;
	while (arr_of_str[index] != NULL)
	{
		free(arr_of_str[index]);
		index++;
	}
	free(arr_of_str);
}

/**
 * @brief Prints each string in an null-terminated array of strings to fd = 1.
 * 
 * @param arr The array of strings to print.
 */
void	ft_print_array(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		ft_putstr_fd(arr[i], 1);
		write(1, "\n", 1);
		i++;
	}
}
