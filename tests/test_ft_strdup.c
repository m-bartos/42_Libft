/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:22:37 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 10:09:52 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	str[] = "ahoooj";
	char	*str_dup;

	str_dup = ft_strdup(str);
	printf ("%s", str_dup);
	return (0);
}
