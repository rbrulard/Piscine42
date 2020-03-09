/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchemoun <jchemoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 09:40:30 by jchemoun          #+#    #+#             */
/*   Updated: 2019/07/07 08:45:42 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int		ft_atoi(const char *str)
{
	int	i;
	int	re;
	int	signe;

	i = 0;
	re = 0;
	signe = 1;
	while (str[i] != '\0')
	{
		if (str[i] == 45 && (str[i + 1] > 47 && str[i + 1] < 58))
			signe = -1;
		if (str[i] > 47 && str[i] < 58)
			re = re * 10 + (str[i] - 48);
		else
			return (signe * re);
		i++;
	}
	return (signe * re);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
