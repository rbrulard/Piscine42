/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 13:51:24 by robrular          #+#    #+#             */
/*   Updated: 2019/07/20 17:08:51 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_plus(int a, int b)
{
	int res;

	res = a + b;
	return (res);
}

int	ft_minus(int a, int b)
{
	int res;

	res = a - b;
	return (res);
}

int	ft_mult(int a, int b)
{
	int res;

	res = a * b;
	return (res);
}

int	ft_div(int a, int b)
{
	int res;

	res = a / b;
	return (res);
}

int	ft_mod(int a, int b)
{
	int res;

	res = a % b;
	return (res);
}
