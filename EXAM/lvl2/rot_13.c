/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 18:16:05 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 19:20:43 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	return 0;
}


/*	 if (argv[1][i] >= 'A' || argv[1][i] <= 'M')
	 argv[1][i] = argv[1][i] + 13;
	 if (argv[1][i] >= 'N' || argv[1][i] <= 'Z')
	 argv[1][i] = argv[1][i] - 13;
	 }*/

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
			argv[1][i] = argv[1][i] + 13;
		else if(argv[1][i] >= 'n' && argv[1][i] <= 'z')
			argv[1][i] = argv[1][i] - 13;
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
			argv[1][i] = argv[1][i] + 13;
		else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
				argv[1][i] = argv[1][i] - 13;
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
