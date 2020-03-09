/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back_track.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarihet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 12:09:22 by rarihet           #+#    #+#             */
/*   Updated: 2019/07/16 09:01:54 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	manage_resolv(int ac, char **av);
int	manage_check(char **tab, int x, int y);

int	check_double(char **tab, char nb, int x, int y)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (tab[y][i] == nb)
			return (1);
		i++;
	}
	i = 1;
	while (i <= y)
	{
		if (tab[i][x] == nb)
			return (1);
		i++;
	}
	tab[y][x] = nb;
	return (manage_check(tab, x, y));
}

int	display_end(int y, int i, char **tab, int *res)
{
	while (y < 5)
	{
		i = 1;
		while (i < 5)
		{
			write(1, &tab[y][i], 1);
			if (i < 4)
				write(1, " ", 1);
			tab[y][i] = '9';
			i++;
		}
		write(1, "\n", 1);
		y++;
	}
	*res = 1;
	return (0);
}

int	recursive_solver(int *res, char **tab, int x, int y)
{
	char nb;

	nb = '1';
	if (y >= 5)
		return (display_end(1, 1, tab, res));
	while (nb < '5')
	{
		if (check_double(tab, nb, x, y) == 0)
		{
			if (x >= 4)
			{
				if (recursive_solver(res, tab, 1, y + 1) == 0)
					tab[y][x] = '0';
			}
			else if (recursive_solver(res, tab, x + 1, y) == 0)
			{
				tab[y][x] = '0';
			}
		}
		nb++;
	}
	return (0);
}
