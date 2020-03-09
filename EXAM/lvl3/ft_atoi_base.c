/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 09:47:23 by robrular          #+#    #+#             */
/*   Updated: 2019/07/24 18:26:44 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int nb_inbase(char c, int base)
{
	if(base <= 10)
		return (c >= '0' && c <= '9');
	return((c >= '0' && c <= '9') || (c >= 'a' && c <= ('a' + base - 10)) || 
			(c >= 'A' && c <= ('A' + base - 10)));
}

int ft_atoi_base(char *str, int base)
{
	int i;
	int nbr;
	int sign;

	if(!str[0] || (base < 2 || base >16))
		return 0;
	i = 0;
	nbr = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && nb_inbase(str[i], base))
	{
		if(str[i] >= 'A' && str[i] <= 'F')
			nbr = (nbr * base) + (str[i] - 'A' + 10);
		else if (str[i] >= 'a' && str[i] <= 'f')
			nbr = (nbr * base) + (str[i] - 'a' + 10);
		else
			nbr = (nbr * base) + (str[i] - 48);
		i++;
	}
	return (nbr *sign);
}

int main(int ac, char **av)
{
	(void)ac;

	printf("%d\n", ft_atoi_base(av[1], atoi(av[2])));
	return 0;}
