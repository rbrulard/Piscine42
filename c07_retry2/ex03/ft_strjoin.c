/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 08:17:23 by robrular          #+#    #+#             */
/*   Updated: 2019/07/24 09:19:21 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_join_strings(char *dest, int size, char **strs, char *sep)
{
	int i;
	int j;
	int current;

	i = 0;
	current = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			dest[current++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j] != '\0')
				dest[current++] = sep[j++];
		}
		i++;
	}
	dest[current] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		total_length;
	int		i;

	i = 0;
	total_length = (ft_strlen(sep) * (size - 1));
	while (i < size)
		total_length += ft_strlen(strs[i++]);
	if (size == 0)
		res = malloc(1);
	else
		res = (char*)malloc(sizeof(char) * total_length);
	if (res == NULL)
		return (NULL);
	i = 0;
	ft_join_strings(res, size, strs, sep);
	return (res);
}
