/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 14:01:12 by robrular          #+#    #+#             */
/*   Updated: 2019/07/19 11:12:40 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OP_H
# define FT_OP_H

# include <unistd.h>

int		ft_plus(int a, int b);
int		ft_minus(int a, int b);
int		ft_mult(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
int		ft_atoi(char *str);
int		ft_do_op(int a, int b, char op);
int		ft_error(char *op, int b);
void	ft_putnbr(long nbr);
long	valid_res(long nbr);

#endif
