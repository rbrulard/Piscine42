/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 18:14:15 by ncolomer          #+#    #+#             */
/*   Updated: 2019/07/18 11:18:35 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libgen.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdlib.h>
#include <errno.h>
#include "ft_str.h"

int
	error(char *program, char *filename)
{
	char	formated[500];

	ft_strcpy(formated, basename(program));
	ft_strcat(formated, ": ");
	ft_strcat(formated, filename);
	ft_strcat(formated, ": ");
	ft_strcat(formated, strerror(errno));
	ft_strcat(formated, "\n");
	write(2, formated, ft_strlen(formated));
	return (errno);
}

int
	read_file(char *filename)
{
	int		file;
	int		read_ret;
	char	buffer;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return (-1);
	while ((read_ret = read(file, &buffer, 1)) > 0)
		write(1, &buffer, 1);
	close(file);
	return (read_ret);
}

int
	read_stdin(void)
{
	char	buffer;
	int		ret;

	ret = 0;
	while ((ret = read(0, &buffer, 1)) > 0)
		write(1, &buffer, 1);
	return (ret);
}

int
	main(int argc, char **argv)
{
	int		ret;
	int		i;

	ret = 0;
	i = 1;
	if (argc < 2 || (argv[1][0] == '-' && i++))
		ret = read_stdin();
	while (i < argc)
	{
		if (read_file(argv[i]) < 0)
			ret = error(argv[0], argv[i]);
		i++;
	}
	return (ret);
}
