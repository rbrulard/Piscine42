/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 10:04:08 by robrular          #+#    #+#             */
/*   Updated: 2019/07/05 13:23:59 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int *tab, int size)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (i < size)
	{
		if (tab[i - 1] >= tab[i])
			j = 0;
		i++;
	}
	if (j)
	{
		i = 0;
		while (i < size)
			ft_putchar(tab[i++] + '0');
		if (tab[0] < (10 - size))
			write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int i;
	int tab[n];

	i = 0;
	if (n == 1)
		write(1, "0, 1, 2, 3, 4, 5, 6, 7, 8, 9", 28);
	while (i < n)
		tab[i++] = 0;
	while (tab[0] <= (10 - n) && n > 1)
	{
		ft_print(tab, n);
		tab[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
		}
	}
}
