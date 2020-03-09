/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:43:11 by robrular          #+#    #+#             */
/*   Updated: 2019/07/26 08:18:00 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char c, char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int ft_double(char c, char *str, int index)
{
	int i;

	i = index - 1;
	while(i >= 0)
	{
		if (c == str[i])
			return (0);
		i--;
	}
	return (1);
}

int main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(av[1][i])
	{
			if(check(av[1][i], av[2]) == 1 && ft_double(av[1][i], av[1], i) == 1)
				write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
