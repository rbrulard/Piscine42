/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 14:07:13 by robrular          #+#    #+#             */
/*   Updated: 2019/07/26 08:24:27 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i])
	{
		if(av[1][i] >= 'a' && av[1][i] <= 'z')
			av[1][i] = 'z' - av[1][i] + 'a';
		if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			av[1][i] = 'Z' - av[1][i] + 'A';
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
