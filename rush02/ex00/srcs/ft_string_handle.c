/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_handle.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 17:22:18 by robrular          #+#    #+#             */
/*   Updated: 2019/07/21 19:03:04 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_dup(char *src, int size)
{
	int		i;
	char	*dest;

	i = 0;
	if (!(dest = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (i <= size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		get_num_from_s(char *str)
{
	int		i;
	char	*num;

	i = 0;
	while (str[i] <= '9' && str[i] >= '0')
		i++;
	num = ft_dup(str, i);
	return (atoi(num));
}

int		ft_size(char *str)
{
	int i;
	int flag;
	int count;

	i = 0;
	flag = 1;
	count = 0;
	while (str[i] != ' ')
		i++;
	while (str[i++] != '\n')
	{
		if (str[i] == ' ' && flag == 0)
		{
			count++;
			flag = 1;
		}
		if (str[i] > 32)
		{
			count++;
			flag = 0;
		}
	}
	if (str[i - 1] == ' ')
		return (count - 1);
	return (count);
}

char	*ft_trimmed(char *str)
{
	int		i;
	int		j;
	char	*trimmed;

	j = 0;
	if (!(trimmed = (char*)malloc(sizeof(char) * ft_size(str) + 1)))
		return (NULL);
	i = ft_bidouille(str);
	while (j < ft_size(str))
	{
		if (str[i] == ' ')
		{
			trimmed[j] = ' ';
			while (str[i] == ' ')
				i++;
			j++;
		}
		trimmed[j] = str[i];
		i++;
		j++;
	}
	trimmed[j] = '\0';
	return (trimmed);
}
