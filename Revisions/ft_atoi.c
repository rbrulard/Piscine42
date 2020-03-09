/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:55:31 by robrular          #+#    #+#             */
/*   Updated: 2019/07/19 14:45:16 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libc.h>
int	ft_atoi(char *str)
{
	int i;
	int res;
	int neg;

	i = 0;
	neg = 1;
	res = 0;
	while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -neg;
		i++;
	}
	while(str[i] && str[i] <= '9' && str[i] >= '0')
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * neg);
}

int main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_atoi(av[1]));
	return 0;
}
