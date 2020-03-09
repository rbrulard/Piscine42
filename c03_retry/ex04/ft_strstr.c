/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 07:08:09 by robrular          #+#    #+#             */
/*   Updated: 2019/07/11 16:05:00 by robrular         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	k = ft_strlen(to_find);
	if (k == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j] && to_find[j])
		{
			if (j == k - 1)
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
