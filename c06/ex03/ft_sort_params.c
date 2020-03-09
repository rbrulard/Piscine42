/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 10:15:26 by robrular          #+#    #+#             */
/*   Updated: 2019/07/10 12:37:41 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int			main(int argc, char **argv)
{
	int		i;
	char	*swap;

	i = 1;
	if (argc <= 1)
		return (0);
	argc = 1;
	while (argv[argc + 1])
	{
		if (ft_strcmp(argv[argc], argv[argc + 1]) > 0)
		{
			swap = argv[argc];
			argv[argc] = argv[argc + 1];
			argv[argc + 1] = swap;
			argc = 1;
		}
		else
			argc++;
	}
	while (argv[i])
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
