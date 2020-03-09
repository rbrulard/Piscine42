/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacruype <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 10:04:29 by lacruype          #+#    #+#             */
/*   Updated: 2019/07/21 19:01:06 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void		ft_display(t_stock *stru, int nbr)
{
	int i;

	i = 0;
	while (stru[i].nb != -1)
	{
		if (stru[i].nb == nbr)
		{
			ft_putstr(stru[i].value);
			return ;
		}
		i++;
	}
}

t_stock		*ft_struct(char **tab, char *str)
{
	int		i;
	char	*charset;
	t_stock	*stru;

	if (!(charset = malloc(sizeof(char) * 2)))
		return (0);
	charset[0] = '\n';
	charset[1] = '\0';
	i = 0;
	if (!(stru = malloc(sizeof(t_stock) * (ft_nombre_mots(str, charset) + 1))))
		return (0);
	stru[ft_nombre_mots(str, charset)].nb = -1;
	while (stru[i].nb != -1)
	{
		stru[i].nb = get_num_from_s(tab[i]);
		stru[i].value = ft_trimmed(tab[i]);
		i++;
	}
	return (stru);
}
