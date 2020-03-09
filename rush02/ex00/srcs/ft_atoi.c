/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacruype <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:09:17 by lacruype          #+#    #+#             */
/*   Updated: 2019/07/21 17:50:22 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		check_space(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int		count_minus(char *str)
{
	int	i;
	int n;

	i = 0;
	n = 0;
	while (str[i] == '+' || str[i] == '-' || str[i] == 32 ||
			str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r')
	{
		if (str[i] == 45)
			n++;
		i++;
	}
	return (n);
}

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int mul;

	nb = 0;
	mul = 1;
	i = check_space(str);
	if (count_minus(&str[i]) % 2 == 1)
		mul = -1;
	while (str[i] == '+' || str[i] == '-')
		i++;
	if (!(str[i] <= 57 && str[i] >= 48))
		return (0);
	while (str[i] <= '9' && str[i] >= '0')
		i++;
	while (str[--i] <= 57 && str[i] >= 48)
	{
		nb = nb + (str[i] - 48) * mul;
		mul = mul * 10;
	}
	return (nb);
}

int		ft_is_number(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] == '0' && str[1] != '\0')
			return (0);
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
