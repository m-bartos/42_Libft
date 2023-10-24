/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:20:03 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/24 10:11:23 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft.h"

int main(void)
{
	char	a;
	char	b;

	a = 'z';
	b = 'z' + 1;
	printf("%d\n", toupper(a));
	printf("%d\n", toupper(b));
	printf("%d\n", ft_toupper(a));
	printf("%d\n", ft_toupper(b));
	return (0);
}
