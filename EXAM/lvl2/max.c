/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 14:41:58 by robrular          #+#    #+#             */
/*   Updated: 2019/07/24 16:38:29 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int max(int *tab, unsigned int len)
{
	unsigned int i;
	int max;
	
	i = 0;
	max = tab[i];
	if(!tab)
		return (0);
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int main()
{
	int tab[] = {1, 2, 8, 10, 9, 36, 4};

	printf("%d\n", max(tab, 7));
	return 0;
}
