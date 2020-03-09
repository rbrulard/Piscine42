/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 14:45:47 by robrular          #+#    #+#             */
/*   Updated: 2019/07/24 17:24:03 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int main(int ac, char **av)
{
	int nbr1;
	int nbr2;
	int r;
	int a;

	(void)ac;
	nbr1 = atoi(av[1]);
	nbr2 = atoi(av[2]);
	r = 0;
	a = 0;
	if(nbr1 < nbr2)
	{
		a = nbr1;
		nbr1 = nbr2;
		nbr2 = a;
	}
	while (nbr2 != 0)
	{
		r = nbr1 % nbr2;
		nbr1 = nbr2;
		nbr2 = r;
	}
	printf("%d", nbr1);
	printf("\n");
	return (0);
}
