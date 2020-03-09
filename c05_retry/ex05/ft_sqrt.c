/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:23:04 by robrular          #+#    #+#             */
/*   Updated: 2019/07/10 10:56:19 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libc.h>
int					ft_sqrt(int nb)
{
	int				i;
	unsigned int	a;
	unsigned int	b;

	i = 1;
	a = 3;
	b = 1;
	if (nb < 0)
		return (0);
	while (b < (unsigned int)nb)
	{
		b = b + a;
		a = a + 2;
		i++;
	}
	if (b == (unsigned int)nb)
		return (i);
	else
		return (0);
}

int main()
{
	printf("%d\n", ft_sqrt(2147483647));
	return 0;
}
