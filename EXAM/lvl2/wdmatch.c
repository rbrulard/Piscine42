/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:38:22 by robrular          #+#    #+#             */
/*   Updated: 2019/07/22 13:49:05 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int j;
	int len;
	int count;

	i = 0;
	j = 0;
	len = 0;
	count = 0;
	if(ac !=3 )
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][len])
		len++;
	while (av[1][i])
	{
		while (av[2][j])
		{
			if(av[1][i] == av[2][j])
			{
				count++;
				break ;
			}
			j++;
		}
		i++;
	}
	i = 0;
	if (len == count)
	{
		while (av[1][i])
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
