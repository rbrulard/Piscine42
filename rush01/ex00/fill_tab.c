/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:57:46 by robrular          #+#    #+#             */
/*   Updated: 2019/07/16 09:02:19 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

void	char_swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

char	*modif_av(char *str)
{
	int i;

	i = 8;
	while (i < 16)
	{
		char_swap(&str[i], &str[i + 16]);
		i = i + 2;
	}
	i = 8;
	while (i < 16)
	{
		char_swap(&str[i], &str[i + 8]);
		i = i + 2;
	}
	char_swap(&str[10], &str[16]);
	char_swap(&str[12], &str[16]);
	char_swap(&str[14], &str[18]);
	char_swap(&str[18], &str[20]);
	return (str);
}

char	**fill_tab(char **tab, char *str, int x, int y)
{
	int i;

	i = 0;
	while (y < 6)
	{
		x = 0;
		while (x < 6)
		{
			if ((x == 0 && y == 0) || (x == 5 && y == 0) || \
				(x == 0 && y == 5) || (x == 5 && y == 5))
				tab[y][x] = 'o';
			else if ((x == 0) || (x == 5) || (y == 0) || (y == 5))
			{
				tab[y][x] = str[i];
				i += 2;
			}
			else
				tab[y][x] = '0';
			x++;
		}
		tab[y][x] = '\0';
		y++;
	}
	tab[y] = NULL;
	return (tab);
}

char	**filled(char *str)
{
	int		y;
	char	**tab;

	y = 0;
	tab = malloc(sizeof(char *) * 7);
	while (y < 6)
	{
		tab[y] = malloc(sizeof(char) * 6);
		y++;
	}
	tab = fill_tab(tab, str, 0, 0);
	return (tab);
}
