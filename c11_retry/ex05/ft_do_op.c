/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 18:19:08 by robrular          #+#    #+#             */
/*   Updated: 2019/07/20 16:28:56 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_op.h"

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int res;
	int count;

	i = 0;
	neg = 1;
	res = 0;
	count = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	if ((count % 2) != 0)
		neg = -1;
	while (str[i] && str[i] <= '9' && str[i] >= '0')
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * neg);
}

long	valid_res(long nbr)
{
	if (nbr > 2147483647)
		nbr = -2147483648 + (nbr - 2147483648);
	else if (nbr < -2147483648)
		nbr = 2147483647 + (2147483649 + nbr);
	return (nbr);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(long nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb <= 9)
		ft_putchar(nb + '0');
}

int		ft_do_op(int a, int b, char op)
{
	int res;

	res = 0;
	if (op == '+')
		res = (int)valid_res((long)ft_plus(a, b));
	if (op == '-')
		res = (int)valid_res(((long)ft_minus(a, b)));
	if (op == '*')
		res = (int)valid_res(((long)ft_mult(a, b)));
	if (op == '/')
		res = (int)valid_res(((long)ft_div(a, b)));
	if (op == '%')
		res = (int)valid_res(((long)ft_mod(a, b)));
	return (res);
}
