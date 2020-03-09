/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:36:59 by robrular          #+#    #+#             */
/*   Updated: 2019/07/24 11:39:41 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_hex(int p)
{
	char *str;
	int tab[5000];
	int i;

	i = 0;
	str = "0123456789abcdef";
	if (p == 0)
		write(1, "0", 1);
	while (p)
	{
		tab[i] = p % 16;
		i++;
		p /= 16;
	}
	while(i-- >= 0)
	{
		if(str[tab[i]] != '0')
			write (1, &str[tab[i]], 1);
	}
}

int ft_atoi(char *str)
{
	int i;
	int sign;
	int res;

	i = 0;
	sign = 1;
	res = 0;

	while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i])
	{
		res= (res * 10) + str[i] - 48;
		i++;
	}
	return (res*sign);
}

int main(int ac, char **av)
{
	if(ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return 0;
}
