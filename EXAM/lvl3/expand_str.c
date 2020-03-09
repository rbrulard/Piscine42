/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 08:55:29 by robrular          #+#    #+#             */
/*   Updated: 2019/07/23 09:32:52 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	if(ac != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	while (av[1][i] == ' ' || av[1][i] == '\t')
		i++;
	while(av[1][i])
	{
		if (av[1][i] == ' ' || av[1][i] == '\t')
			flag = 1;
		else
		{
			if (flag == 1)
				write(1, "   ", 3);
			flag = 0;
			write(1, &av[1][i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
