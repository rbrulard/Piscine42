/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 20:49:56 by exam              #+#    #+#             */
/*   Updated: 2019/07/25 16:26:04 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libc.h>

int ft_size(int nbr)
{
	int i;

	i = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int nbr)
{
	int size;
	int i;
	unsigned int tmp; 
	char *tab;
	char *rev;
	int j;

	i = 0;
	tmp = (unsigned int)nbr;
	size = ft_size(nbr);
	if (nbr < 0)
		size = size + 1;
	if	(!(tab = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	if	(!(rev = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	if (nbr < 0)
	{
		tmp = -tmp;
		i++;
	}
	while (tmp != 0)
	{
		tab[i] = (tmp % 10) + '0';
		tmp = tmp / 10;
		i++;
	}
	j = 0;
	i--;
	while (j < i)
	{
		rev[j] = tab[i];
		i--;
		j++;
	}
	return (rev);
}
