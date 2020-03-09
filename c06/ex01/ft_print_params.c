/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 08:56:05 by robrular          #+#    #+#             */
/*   Updated: 2019/07/10 09:09:57 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int j;

	argc = 1;
	while (argv[argc])
	{
		j = 0;
		while (argv[argc][j])
		{
			write(1, &argv[argc][j], 1);
			j++;
		}
		write(1, "\n", 1);
		argc++;
	}
}
