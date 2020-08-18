#include <stdlib.h>

int ft_len(int nbr)
{
	int len;
	long nb;

	len = 0;
	nb = (long)nbr;
	if(nbr < 0)
	{
		nb = -nb;
		len++;
	}
	while(nb)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

void ft_strrev(char *str, int nbr)
{
	int i;
	int j;
	char c;

	i = 0;
	j = 0;
	if(nbr < 0)
		i++;
	while (str[j])
		j++;
	j = j - 1;
	while (i < j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
}

char	*ft_itoa(int nbr)
{
	int i;
	int j;
	long nb;
	char *str;
	int len;
	char c;

	i = 0;
	j = 0;
	len = ft_len(nbr);
	nb = (long)nbr;
	if(nbr == 0)
	{
		if (!(str = (char*)malloc(sizeof(char) * 2)))
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}

	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (nb < 0)
	{
		nb = -nb;
		str[i] = '-';
		i++;
	}
	while (nb != 0)
	{
		c = ((nb % 10) + '0');
		str[i] = c;
		nb = nb / 10;
		i++;
	}
	str[i] = '\0';
	ft_strrev(str, nbr);
	return (str);
}
