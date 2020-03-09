/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:33:51 by robrular          #+#    #+#             */
/*   Updated: 2019/07/15 11:53:44 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int l;
	int *tab;

	i = 0;
	if (min >= max)
		return (0);
	l = max - min;
	if (!(tab = (int*)malloc(sizeof(int) * l + 1)))
		return (0);
	while (i < l)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (l);
}
