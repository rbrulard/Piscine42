/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 07:21:44 by robrular          #+#    #+#             */
/*   Updated: 2019/07/10 08:25:33 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = ft_strlen(dest);
	j = 0;
	k = 0;
	if (size <= i)
		k = ft_strlen(src) + size;
	else
		k = ft_strlen(src) + i;
	while (src[j] && (i + j + 1 < size))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (k);
}
