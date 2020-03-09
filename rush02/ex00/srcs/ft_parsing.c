/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacruype <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:23:31 by lacruype          #+#    #+#             */
/*   Updated: 2019/07/22 16:07:25 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_cmpt_f(char *fichier)
{
	int		fd;
	char	buf[1];
	int		ret;
	int		i;

	i = 0;
	fd = open(fichier, O_RDONLY);
	if (fd == -1)
	{
		write(1, "prob ouv fich\n", 14);
		return (0);
	}
	while ((ret = read(fd, buf, 1) > 0))
		i++;
	return (i);
}

char	*ft_create_str(char *fichier)
{
	int		i;
	int		fd;
	int		ret;
	char	buf[1];
	char	*str;

	i = 0;
	if (!(str = malloc(sizeof(char) * ft_cmpt_f(fichier))))
		return (0);
	fd = open(fichier, O_RDONLY);
	if (fd == -1)
	{
		write(1, "prob ouv fich\n", 14);
		return (0);
	}
	while ((ret = read(fd, buf, 1) > 0))
	{
		str[i] = buf[0];
		i++;
	}
	str[i] = '\0';
	close(fd);
	return (str);
}
