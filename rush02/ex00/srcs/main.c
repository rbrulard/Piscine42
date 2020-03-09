/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacruype <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 10:09:20 by lacruype          #+#    #+#             */
/*   Updated: 2019/07/22 16:16:40 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		main(int ac, char **av)
{
	char	*str;
	char	**tab;
	t_stock	*stru;

	if (ac != 2 || ft_is_number(av[1]) == 0)
	{
		write(1, "error\n", 6);
		return (0);
	}
	str = ft_create_str("dico/numbers.dict");
	tab = ft_create_tab_tab(str);
	stru = ft_struct(tab, str);
	ft_cutnbr(stru, av[1]);
	free(str);
	free(tab);
	free(stru);
	return (0);
}
