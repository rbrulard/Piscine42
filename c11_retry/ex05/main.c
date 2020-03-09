/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 18:19:41 by robrular          #+#    #+#             */
/*   Updated: 2019/07/20 16:35:17 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_op.h"

int	ft_error(char *op, int b)
{
	if (!((op[0] == '+' || op[0] == '-' || op[0] == '*' || op[0] == '/' ||
					op[0] == '%') && op[1] == '\0'))
		return (-1);
	if (op[0] == '/' && b == 0)
		return (-2);
	if (op[0] == '%' && b == 0)
		return (-3);
	else
		return (1);
}

int	main(int argc, char **argv)
{
	int res;

	res = 0;
	if (argc != 4)
		return (0);
	if (ft_error(argv[2], ft_atoi(argv[3])) == -1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (ft_error(argv[2], ft_atoi(argv[3])) == -2)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (ft_error(argv[2], ft_atoi(argv[3])) == -3)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	else
		ft_putnbr(ft_do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2][0]));
	write(1, "\n", 1);
	return (0);
}
