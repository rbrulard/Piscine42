/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:56:27 by robrular          #+#    #+#             */
/*   Updated: 2019/07/23 14:03:57 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libc.h>
int *ft_range(int start, int end);
int *ft_rrange(int start, int end);
int main(int ac, char **av)
{

	int i;
	int *range;
	int *rrange;

	(void)ac;
	range = ft_range(atoi(av[1]), atoi(av[2]));
	rrange = ft_rrange(atoi(av[1]), atoi(av[2]));
	i = 0;
	while(i < 11)
	{
		printf("%d", range[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while(i < 11)
	{
		printf("%d", rrange[i]);
		i++;
	}
	return 0;
}
