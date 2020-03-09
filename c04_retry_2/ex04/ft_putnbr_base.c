/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 10:09:19 by robrular          #+#    #+#             */
/*   Updated: 2019/11/04 13:12:34 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libc.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int		ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (ft_is_alpha(base[i]) == 0)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				i;
	unsigned int	tmp;
	int				tab[100];

	if (ft_check_base(base) == 0)
		return ;
	i = 0;
	if (nbr == 0)
		write(1, &base[0], 1);
	if (nbr < 0)
	{
		write(1, "-", 1);
		tmp = (unsigned int)-nbr;
	}
	else
		tmp = (unsigned int)nbr;
	while (tmp != 0)
	{
		tab[i] = tmp % ft_strlen(base);
		tmp = tmp / ft_strlen(base);
		i++;
	}
	while (--i >= 0)
		write(1, &base[tab[i]], 1);
}

int main()
{
	char s[] = "0123456789ABCDEF";
	ft_putnbr_base(10, s);
	return 0;
}
