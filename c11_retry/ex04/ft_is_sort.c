/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 12:40:13 by robrular          #+#    #+#             */
/*   Updated: 2019/07/20 16:39:50 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int flag;

	if (length < 2)
		return (1);
	i = 0;
	flag = 1;
	while (++i < length)
	{
		if ((*f)(tab[i - 1], tab[i]) > 0)
		{
			flag = 0;
			break ;
		}
	}
	if (flag == 1)
		return (1);
	i = 0;
	while (++i < length)
		if ((*f)(tab[i - 1], tab[i]) < 0)
			return (0);
	return (1);
}
