/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 18:14:15 by ncolomer          #+#    #+#             */
/*   Updated: 2019/07/17 10:45:07 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdlib.h>

int
	error(char *message)
{
	int	i;

	i = 0;
	while (message[i])
		i++;
	write(2, message, i);
	return (EXIT_FAILURE);
}

int
	main(int argc, char const **argv)
{
	int		file;
	char	buffer;
	int		read_ret;

	if (argc > 2)
		return (error("Too many arguments.\n"));
	else if (argc < 2)
		return (error("File name missing.\n"));
	file = open(argv[1], O_RDONLY);
	if (file < 0)
		return (error("Cannot read file.\n"));
	while ((read_ret = read(file, &buffer, 1)) != 0)
		write(1, &buffer, 1);
	close(file);
	if (read_ret < 0)
		return (error("Cannot read file.\n"));
	return (EXIT_SUCCESS);
}
