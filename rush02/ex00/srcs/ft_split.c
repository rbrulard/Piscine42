/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacruype <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 18:15:33 by lacruype          #+#    #+#             */
/*   Updated: 2019/07/21 18:01:16 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_is_in_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (0);
		i++;
	}
	return (1);
}

int		ft_nombre_mots(char *str, char *charset)
{
	int i;
	int mot;

	i = 0;
	mot = 0;
	while (str[i])
	{
		if (ft_is_in_charset(str[i], charset) == 1)
		{
			mot++;
			while (ft_is_in_charset(str[i], charset) == 1 && str[i] != '\0')
				i++;
		}
		while (ft_is_in_charset(str[i], charset) == 0)
			i++;
	}
	return (mot);
}

char	**ft_taille_mots(char *str, char **tab, char *charset)
{
	int i;
	int j;
	int mot;

	i = 0;
	mot = 0;
	while (str[i])
	{
		j = 0;
		if (ft_is_in_charset(str[i], charset) == 1)
		{
			mot++;
			while (ft_is_in_charset(str[i], charset) == 1 && str[i] != '\0')
			{
				i++;
				j++;
			}
			if (!(tab[mot - 1] = malloc(sizeof(char) * (j + 1))))
				return (0);
		}
		while (ft_is_in_charset(str[i], charset) == 0)
			i++;
	}
	return (tab);
}

char	**ft_place_mots(char *str, char **tab, char *charset)
{
	int i;
	int mot;
	int j;

	i = 0;
	mot = 0;
	while (str[i])
	{
		j = 0;
		if (ft_is_in_charset(str[i], charset) == 1)
		{
			mot++;
			while (ft_is_in_charset(str[i], charset) == 1 && str[i] != '\0')
			{
				i++;
				tab[mot - 1][j] = str[i - 1];
				j++;
			}
			tab[mot - 1][j] = '\0';
		}
		while (ft_is_in_charset(str[i], charset) == 0)
			i++;
	}
	return (tab);
}

char	**ft_create_tab_tab(char *str)
{
	char **tab;
	char *charset;

	if (!(charset = malloc(sizeof(char) * 2)))
		return (0);
	charset[0] = '\n';
	charset[1] = '\0';
	if (!(tab = malloc(sizeof(char*) * (ft_nombre_mots(str, charset) + 1))))
		return (0);
	tab[ft_nombre_mots(str, charset)] = NULL;
	tab = ft_taille_mots(str, tab, charset);
	ft_place_mots(str, tab, charset);
	return (tab);
}
