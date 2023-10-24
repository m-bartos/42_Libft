/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:19:22 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 10:09:10 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	dest[] = "ABCDEFGHIJKL";
	char	dest_a[] = "ABCDEFGHIJKL";

	printf("%s\n", dest);
	ft_memmove(dest, dest, 5);
	printf("%s\n", dest);
	memmove(dest_a, dest_a, 5);
	printf("%s\n", dest_a);
	return(0);
}