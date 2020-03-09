/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:52:35 by robrular          #+#    #+#             */
/*   Updated: 2019/07/26 08:26:32 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int ft_atoi(char *str)
{
	int i;
	int neg;
	int res;

	i = 0;
	neg = 1;
	res = 0;
	while(str[i] >= 9 && str[i] < 13 && str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		neg = -neg;
		i++;
	}
	while(str[i])
	{
		res = (res * 10) + str[i] - 48;
		i++;
	}
	return (neg * res);
}

void ft_putnbr(long nb)
{
	char c;

	if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if(nb <= 9)
	{
		c = nb + 48;
		write(1, &c, 1);
	}
}

int	is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int i;
	long res;

	if(ac != 2)
		return 0;
	if (ft_atoi(av[1]) < 0)
		return 0;
	i = 0;
	res = 0;
	while (i <= ft_atoi(av[1]))
	{
		if(is_prime(i) == 1)
		res = res + i;
		i++;
	}
	ft_putnbr(res);
	write(1, "\n", 1);
	return (0);
}
