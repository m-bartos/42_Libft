/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:03:45 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/17 15:49:55 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	else if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + str[i] - '0';
		i++;
	}
	return (number * sign);
}

/*
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	int		i;
	int		my_atoi;
	char	*array_of_strs[] = {"-0", "0", " \n\f\r \v	-12a3", " \b	+123", " \v	-123", " \n \b \v	-+123", " \n \b \v	--123", NULL};

	i = 0;
	while (array_of_strs[i] != NULL)
	{
		printf("------START----\n");
		printf("Input:|%s|\n", array_of_strs[i]);
		printf("atoi:%d\n", atoi(array_of_strs[i]));
		printf("ft_atoi:%d\n", ft_atoi(array_of_strs[i]));
		i++;
	}
	return (0);
}
*/
