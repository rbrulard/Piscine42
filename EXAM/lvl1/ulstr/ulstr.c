/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 18:30:55 by exam              #+#    #+#             */
/*   Updated: 2019/07/12 18:52:26 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_is_capital(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int ft_is_low(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (ft_is_capital(argv[1][i]) == 1)
			argv[1][i] = argv[1][i] + 32;
		else if (ft_is_low(argv[1][i]) == 1)
			argv[1][i] = argv[1][i] - 32;
		i++;
	}
	ft_putstr(argv[1]);
	return (0);
}
