/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:23:11 by robrular          #+#    #+#             */
/*   Updated: 2019/07/24 17:51:07 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int start, int end)
{
	int *range;
	int i;

	i = 0;
	if (start > end)
		if(!(range = (int*)malloc(sizeof(int) * (start - end) + 1)))
			return (0);
	if (start < end)
		if (!(range = (int*)malloc(sizeof(int) * (end - start) + 1)))
			return (0);
	while (start != end)
	{
		range[i] = start;
		start += (start > end) ? -1 : 1;
		i++;
	}
	range[i] = start;
	return (range);
}
