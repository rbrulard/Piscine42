/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchemoun <jchemoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 09:44:07 by jchemoun          #+#    #+#             */
/*   Updated: 2019/07/07 09:06:10 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_first(int x)
{
	int i;

	i = 0;
	ft_putchar('o');
	while (i < (x - 2))
	{
		ft_putchar('-');
		i++;
	}
	if (x > 1)
		ft_putchar('o');
}

void	ft_middle(int x)
{
	int i;

	i = 0;
	ft_putchar('|');
	while (i < x - 2)
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 1)
		ft_putchar('|');
}

void	ft_last(int x)
{
	int i;

	i = 0;
	ft_putchar('o');
	while (i < (x - 2))
	{
		ft_putchar('-');
		i++;
	}
	if (x > 1)
		ft_putchar('o');
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
