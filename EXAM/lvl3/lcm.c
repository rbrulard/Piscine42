/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 16:27:31 by robrular          #+#    #+#             */
/*   Updated: 2019/07/24 17:57:42 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int i;
	unsigned int l;
	unsigned int r;
	unsigned int temp_a;
	unsigned int temp_b;

	i = 1;
	temp_a = a;
	temp_b = b;
	l = 0;
	r= 0;
	if (a < b)
	{
		l = a;
		a = b;
		b = l;
	}
	while (temp_b != 0)
	{
		r = temp_a % temp_b;
		temp_a = temp_b;
		temp_b = r;
	}
	r = (a * b) / temp_a;

	return (r);
}

int main(int ac, char **av)
{

	(void)ac;
	printf("%d\n", lcm(atoi(av[1]), atoi(av[2])));
	return 0;
}
