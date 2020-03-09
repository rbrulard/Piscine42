/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:39:02 by robrular          #+#    #+#             */
/*   Updated: 2019/07/19 11:04:43 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tb;

	i = 0;
	if (!(tb = (int*)malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		tb[i] = (*f)(tab[i]);
		i++;
	}
	return (tb);
}
