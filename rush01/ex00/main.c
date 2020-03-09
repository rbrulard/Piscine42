/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarihet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 13:49:46 by rarihet           #+#    #+#             */
/*   Updated: 2019/07/16 09:10:22 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		recursive_solver(int *res, char **tab, int x, int y);
char	*modif_av(char *str);
char	**filled(char *str);

int		check_value(int ac, char **av)
{
	int		i;
	int		j;

	i = 0;
	if (ac != 2)
		return (1);
	j = 0;
	while (av[1][j] != '\0')
		j++;
	while (av[1][i] != '\0')
	{
		if (j != 31)
			return (1);
		if ((av[1][i] >= '1' && av[1][i] <= '4') && ((av[1][i + 1] != '\0') &&
					(av[1][i + 1] != 32)))
			return (1);
		if ((av[1][i] == ' ') && (av[1][i + 1] != '\0' &&
					(!((av[1][i + 1] >= '1') && (av[1][i + 1] <= '4')))))
			return (1);
		i++;
	}
	if (av[1][0] == '\0')
		return (1);
	return (0);
}

int		manage_resolv(int ac, char **av)
{
	int		i;
	int		result;
	char	**tab;
	char	*str;

	if ((i = check_value(ac, av)) == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	str = modif_av(av[1]);
	tab = filled(str);
	result = 0;
	recursive_solver(&result, tab, 1, 1);
	if (result == 0)
		write(1, "Error\n", 6);
	while (i < 7)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}

int		main(int ac, char **av)
{
	return (manage_resolv(ac, av));
}
