/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarihet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 15:36:11 by rarihet           #+#    #+#             */
/*   Updated: 2019/07/14 16:04:05 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_up(char **tab, int y)
{
	int		i;
	char	bloc1;
	char	max1;

	i = 1;
	max1 = 0;
	bloc1 = 0;
	while (i < 5)
	{
		if (tab[y][i] == '0')
			return (0);
		if (tab[y][i] > max1)
		{
			max1 = tab[y][i];
			bloc1++;
		}
		i++;
	}
	if (bloc1 != tab[y][0] - '0')
		return (1);
	return (0);
}

int	check_lin(char **tab, int y)
{
	int		i;
	char	bloc1;
	char	max1;

	i = 4;
	max1 = '0';
	bloc1 = 0;
	while (i > 0)
	{
		if (tab[y][i] == '0')
			return (0);
		if (tab[y][i] > max1)
		{
			max1 = tab[y][i];
			bloc1++;
		}
		i--;
	}
	if (bloc1 != tab[y][5] - '0')
		return (1);
	if (check_up(tab, y) == 1)
		return (1);
	return (0);
}

int	check_down(char **tab, int x)
{
	char	bloc2;
	char	max2;
	int		i;

	i = 1;
	max2 = 0;
	bloc2 = 0;
	while (i < 5)
	{
		if (tab[i][x] == '0')
			return (0);
		if (tab[i][x] > max2)
		{
			max2 = tab[i][x];
			bloc2++;
		}
		i++;
	}
	if (bloc2 != tab[0][x] - '0')
		return (1);
	return (0);
}

int	check_col(char **tab, int x)
{
	char	bloc2;
	char	max2;
	int		i;

	i = 4;
	max2 = 0;
	bloc2 = 0;
	while (i > 0)
	{
		if (tab[i][x] == '0')
			return (0);
		if (tab[i][x] > max2)
		{
			max2 = tab[i][x];
			bloc2++;
		}
		i--;
	}
	if (bloc2 != tab[5][x] - '0')
		return (1);
	if (check_down(tab, x) == 1)
		return (1);
	return (0);
}

int	manage_check(char **tab, int x, int y)
{
	if (check_col(tab, x) == 1)
	{
		tab[y][x] = '0';
		return (1);
	}
	if (check_lin(tab, y) == 1)
	{
		tab[y][x] = '0';
		return (1);
	}
	return (0);
}
