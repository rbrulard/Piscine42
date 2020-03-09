/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cutnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:30:00 by robrular          #+#    #+#             */
/*   Updated: 2019/07/21 18:59:15 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_recursive_power(int nb, int power)
{
	int res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
		res = nb * ft_recursive_power(nb, (power - 1));
	return (res);
}

void	ft_cutnbr(t_stock *stru, char *nbr)
{
	int i;
	int j;
	int tens;
	int first;
	int nb;

	i = ft_strlen(nbr) - 1;
	j = 0;
	nb = 0;
	if (ft_atoi(nbr) < 20 && ft_atoi(nbr) >= 0)
		ft_display(stru, ft_atoi(nbr));
	else
	{
		while (nbr[j])
		{
			tens = ft_recursive_power(10, (i - j));
			first = (int)nbr[j] - 48;
			ft_display(stru, first);
			write(1, " ", 1);
			ft_display(stru, tens);
			write(1, " ", 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
