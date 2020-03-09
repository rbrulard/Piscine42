/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchemoun <jchemoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 09:44:07 by jchemoun          #+#    #+#             */
/*   Updated: 2019/07/06 17:03:55 by jchemoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_atoi(const char *str)
{
	int	i;
	int	re;
	int	signe;

	i = 0;
	re = 0;
	signe = 1;
	while (str[i] != '\0')
	{
		if (str[i] == 45 && (str[i + 1] > 47 && str[i + 1] < 58))
			signe = -1;
		if (str[i] > 47 && str[i] < 58)
			re = re * 10 + (str[i] - 48);
		else
			return (signe * re);
		i++;
	}
	return (signe * re);
}

void	ft_first(int x)
{
	int i;

	i = 0;
	ft_putchar('A');
	while (i < (x - 2))
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar('C');
}

void	ft_middle(int x)
{
	int i;

	i = 0;
	ft_putchar('B');
	while (i < x - 2)
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 1)
		ft_putchar('B');
}

void	ft_last(int x)
{
	int i;

	i = 0;
	ft_putchar('A');
	while (i < (x - 2))
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar('C');
}

void	rush(int x, int y)
{
	int i;

	if (x == 0 || y == 0)
		return ;
	i = 0;
	ft_first(x);
	ft_putchar('\n');
	while (i < y - 2)
	{
		ft_middle(x);
		ft_putchar('\n');
		i++;
	}
	if (y > 1)
	{
		ft_last(x);
		ft_putchar('\n');
	}
}
