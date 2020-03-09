/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:11:52 by robrular          #+#    #+#             */
/*   Updated: 2019/07/23 14:23:36 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int j;
	int count;
	int len;

	(void)ac;
	i = 0;
	j = 0;
	count = 0;
	len = 0;

	while (av[1][len])
		len++;
	while (av[1][i])
	{
		while(av[2][j])
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
	if(len == count)
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
	return 0;
}
