/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 10:01:48 by robrular          #+#    #+#             */
/*   Updated: 2019/07/24 10:27:45 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
	if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if((str[i] >= 'a' && str[i] <= 'z')  && (str[i - 1] == ' ' || str[i - 1] == '\0'))
			str[i] = str[i] - 32;
		i++;
	}
}

int main(int ac, char **av)
{
	(void)ac;
	int i;
	int j;

	i = 1;
	j = 0;
	while (av[i])
	{
		j = 0;
		str_capitalizer(av[i]);
		while(av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		i++;
	}
	return 0;
}
