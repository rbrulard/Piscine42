/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 15:52:26 by robrular          #+#    #+#             */
/*   Updated: 2019/07/25 17:10:07 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libc.h>

int len_int(int nb)
{
	int len;
	long nbr;

	len = 0;
	nbr = (long)nb;
	if(nb < 0)
	{
		len++;
		nbr = -nbr;
	}
	while(nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char *str_rev(char *str)
{
	int i;
	int j;
	char c;

	i = 0;
	j = 0;
	while(str[j])
		j++;
	if(str[i] == '-')
		i++;
	j--;
	while(i < j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
	return(str);
}

char *ft_itoa(int nbr)
{
	long nb;
	char *str;
	int len;
	int i;

	len = len_int(nbr);
	nb = (long)nbr;
	i = 0;
	if(nbr < 0)
	{
		nb = -nbr;
		i++;
	}
	if(!(str = (char*)malloc(sizeof(char) * len + 1)))
		return NULL;
	printf("%d\n", len);
	if(nbr < 0)
		str[0] = '-';
	while(i < len)
	{
		str[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	str[i] = '\0';

	return (str_rev(str));
}

int main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_itoa(atoi(av[1])));
	return 0;
}
