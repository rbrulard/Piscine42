/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:54:22 by robrular          #+#    #+#             */
/*   Updated: 2019/07/22 16:40:03 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int is_power_of_2(unsigned int n)
{
	return ((n & (-n)) == n ? 1 : 0);
}

int main(int ac, char **av)
{
	(void)ac;

	printf("%d\n", is_power_of_2(atoi(av[1])));
	return 0;
}
