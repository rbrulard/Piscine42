/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 08:12:39 by robrular          #+#    #+#             */
/*   Updated: 2019/07/25 13:33:12 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *b);
int		check(char *b, char **str, int *s, int *bsize);

void	ft_putnbr_base(int nb, char *b, char *str, int *x)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	while (b[i])
		i++;
	if (i <= 1)
		return ;
	n = (unsigned int)(nb < 0) ? (nb *= -1) : nb;
	if (n >= i)
		ft_putnbr_base(n / i, b, str, x);
	str[++*x] = b[n % i];
}

char	*ft_convert_base(char *nb, char *base_f, char *base_t)
{
	int		lenght;
	int		bsize;
	char	*str;
	int		nb_s;
	int		n;

	lenght = 1;
	if (!(check(base_f, 0, 0, &bsize)) || !(check(base_t, 0, 0, &bsize)))
		return (0);
	n = ft_atoi_base(nb, base_f);
	nb_s = n;
	n *= (n < 0) ? -1 : 1;
	while (n >= bsize && ++lenght)
		n /= bsize;
	lenght += (nb_s < 0);
	if (!(str = malloc(sizeof(char) * (lenght + 1))))
		return (0);
	while (lenght)
		str[lenght--] = '\0';
	n = (nb_s < 0) ? nb_s * -1 : nb_s;
	lenght = -1;
	ft_putnbr_base(n, base_t, (nb_s < 0) ? str + 1 : str, &lenght);
	str[0] = (nb_s < 0) ? '-' : str[0];
	return (str);
}
