/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 09:10:48 by robrular          #+#    #+#             */
/*   Updated: 2019/07/09 08:05:36 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
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
