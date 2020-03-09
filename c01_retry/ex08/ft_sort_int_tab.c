/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 08:35:11 by robrular          #+#    #+#             */
/*   Updated: 2019/07/07 09:59:20 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int i;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1] && tab[i + 1] != '\0')
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i = 0;
		}
		if (tab[i] < tab[i + 1])
			i++;
	}
}
