/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:22:45 by robrular          #+#    #+#             */
/*   Updated: 2019/07/19 15:56:32 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (ft_strlen(base) <= 1)
		return 0;
	while (base[i])
	{
		j = i + 1;
		if(base[i] <= 31 || base[i] == '+' || base[i] == '-')
			return 0;
		while (base[j])
		{
			if (base[i] == base[j])
				return 0;
			j++;
		}
		i++;
	}
	return 1;
}

int ft_check_index(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if(c == base[i])
			return i;
		i++;
	}
	return (-1);
}

int ft_atoi_base(char *str, char *base)
{
	int i;
	int res;
	int neg;

	i = 0;
	res = 0;
	neg = 1;
	if (ft_check_base(base) == 0)
		return 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		neg = -neg;
		i++;
	}
	while (str[i] && ft_check_index(str[i], base) > -1)
	{
		res = (res * ft_strlen(base) + ft_check_index(str[i], base));
			i++;
	}
	return (res * neg);
}
