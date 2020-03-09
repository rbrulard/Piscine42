/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 16:42:23 by robrular          #+#    #+#             */
/*   Updated: 2019/07/24 09:59:25 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rstr_capitalizer(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while(str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' ||
					str[i + 1] == '\t' || str[i + 1] == '\0'))
			str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;
	}
}


int main(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
	{
		rstr_capitalizer(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return 0;
}
