/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 09:03:52 by robrular          #+#    #+#             */
/*   Updated: 2019/11/04 12:02:57 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check(char *b, char **str, int *s, int *bsize)
{
	int i;
	int j;

	(s && (*s = 1));
	i = -1;
	while (b[++i])
	{
		if (b[i] <= 32 || b[i] == 43 || b[i] == 45)
			return (0);
		j = -1;
		while (b[++j])
			if (b[i] == b[j] && (j != i))
				return (0);
	}
	if (i <= 1)
		return (0);
	if (s)
		while ((**str >= 9 && **str <= 13) || (**str == 32))
			(*str)++;
	while (s && *(str) && (**str == '+' || **str == '-'))
	{
		*s *= (**str == '-') ? -1 : 1;
		(*str)++;
	}
	return (*bsize = i);
}

int		ft_atoi_base(char *str, char *b)
{
	int s;
	int n;
	int nb;
	int bsize;

	s = 1;
	nb = 0;
	if (!check(b, &str, &s, &bsize))
		return (nb);
	while (*str)
	{
		n = 0;
		while (b[n] && b[n] != *str)
			n++;
		if (!b[n])
			return (nb * s);
		if ((*str >= 9 && *str <= 13) || *str == 32)
			return (nb * s);
		if (*str == '+' || *str == '-' || *str == '%' || *str == '/')
			return (nb * s);
		nb = (nb * bsize) + n;
		str++;
	}
	return (nb * s);
}
