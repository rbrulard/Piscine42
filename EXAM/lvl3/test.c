/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:58:11 by robrular          #+#    #+#             */
/*   Updated: 2019/07/25 09:31:53 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int nb_inbase(char c, int base)
{
	if(base <= 10)
		return (c >= '0' && c <= '9');
	else
		return ((c >= '0' && c <= '9') || (c >= 'a' && c >= 'a' + base - 10) || (c >= 'A' && c <= 'A' + base - 10));

}

int atoi_base(char *str, int base)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while((str[i] <= 13 && str[i] >= 9) || str[i] == ' ')
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		sign = -1;
		i++;
	}
	while (str[i] && nb_inbase(str[i], base))
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			res = (res * base) + (str[i] - 'A' + 10);
		else if(str[i] >= 'a' && str[i] <= 'z')
			res = (res * base) + (str[i] - 'a' + 10);
		else 
			res = (res * base) + (str[i] + 48);
		i++;
	}
	return (res * sign);
}
