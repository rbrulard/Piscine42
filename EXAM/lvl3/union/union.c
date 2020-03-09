/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 18:56:05 by exam              #+#    #+#             */
/*   Updated: 2019/07/22 11:51:12 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_rev(char c, char *str, int index)
{
	int i;

	i = index - 1;
	while (i >= 0)
	{
		if (c == str[i])
			return (0);
		i--;
	}
	return (1);
}

int ft_other(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (0);
		i++;
	}
	return (1);

}
int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(argv[1][i])
	{
		if(ft_rev(argv[1][i], argv[1], i) == 1)
			write(1, &argv[1][i], 1);
		i++;
	}
	i = 0;
	while(argv[2][i])
	{
		if (ft_other(argv[2][i], argv[1]) == 1 && ft_rev(argv[2][i], argv[2], i) == 1)
			write(1, &argv[2][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
