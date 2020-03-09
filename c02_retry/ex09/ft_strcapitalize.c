/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 13:52:39 by robrular          #+#    #+#             */
/*   Updated: 2019/07/19 16:31:07 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int		ft_is_up(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int		ft_is_low(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((i == 0) && (ft_is_low(str[i]) == 1))
			str[i] = str[i] - 32;
		if ((ft_is_low(str[i]) == 1) && (ft_is_alpha(str[i - 1]) == 0))
			str[i] = str[i] - 32;
		else if ((ft_is_up(str[i]) == 1) && (ft_is_alpha(str[i - 1]) == 1)
				&& (i != 0))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
