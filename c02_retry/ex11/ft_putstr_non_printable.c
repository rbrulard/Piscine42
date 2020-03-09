/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 14:35:04 by robrular          #+#    #+#             */
/*   Updated: 2019/07/09 09:01:50 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 16)
		{
			write(1, "\\0", 2);
			if (str[i] < 10)
				str[i] = str[i] + 48;
			else if (str[i] > 9 && str[i] < 16)
				str[i] = str[i] + 87;
		}
		else if (str[i] > 15 && str[i] < 32)
		{
			write(1, "\\1", 2);
			if (str[i] > 15 && str[i] < 26)
				str[i] = str[i] + 32;
			else if (str[i] > 25 && str[i] < 32)
				str[i] = str[i] + 71;
		}
		write(1, &str[i], 1);
		i++;
	}
}
