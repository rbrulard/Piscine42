/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 13:30:42 by robrular          #+#    #+#             */
/*   Updated: 2019/07/19 16:00:07 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int ft_size(long nbr)
{
	int i;

	i = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		i++;
	}
	while(nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	long	nb;
	int		i;
	char	*tab;

	i = ft_size(nbr);
	nb = (long)nbr;
	if(!(tab = (char*)malloc(sizeof(char) * (ft_size(nbr) + 1))))
		return (NULL);
		tab[i--] = '\0';
	if (nb == 0)
	{
		tab[0] = '0';
		return (tab);
	}
	if (nb < 0)
	{
		tab[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		tab[i] = (nb % 10) + 48;
		nb = nb / 10;
		i--;
	}
	return(tab);
}

int main(int ac, char **av)
{
	(void)ac;

	printf("%s\n", ft_itoa(atoi(av[1])));
	return 0;
}
