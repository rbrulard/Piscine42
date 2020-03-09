/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:48:40 by robrular          #+#    #+#             */
/*   Updated: 2019/07/15 11:52:50 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int	*ft_range(int min, int max)
{
	int i;
	int range;
	int *tab;

	i = 0;
	if (min >= max)
		return (NULL);
	range = max - min;
	if (!(tab = (int*)malloc(sizeof(int) * range + 1)))
		return (NULL);
	while (i < range)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
