/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:48:20 by robrular          #+#    #+#             */
/*   Updated: 2019/07/23 14:05:08 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int i;
	int *range;

	i = 0;
	if(start > end)
	{	
		if(!(range = (int*)malloc(sizeof(int) * (start - end) + 1)))
			return 0;
	}
	if(start < end)
	{
		if(!(range = (int*)malloc(sizeof(int) * (end - start) + 1)))
			return 0;
	}
	while (start != end)
	{
		range[i] = end;
		end -= (start > end) ? -1 : 1;
		i++;
	}
	range[i] = end;
	return (range);
}
