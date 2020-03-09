/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:55:53 by robrular          #+#    #+#             */
/*   Updated: 2019/07/17 13:20:12 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_sep(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	k = 0;
	if (!(split = (char**)malloc(sizeof(char*) * 256)))
		return (NULL);
	while (check_sep(str[i], charset) == 1)
		i++;
	while (str[i])
	{
		j = 0;
		if (!(split[k] = (char*)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[i] && check_sep(str[i], charset) == 0)
			split[k][j++] = str[i++];
		while (str[i] && check_sep(str[i], charset) == 1)
			i++;
		split[k][j] = '\0';
		k = k + 1;
	}
	split[k] = NULL;
	return (split);
}
