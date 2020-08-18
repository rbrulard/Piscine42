#include <unistd.h>

void ft_putnbr(int nb)
{
	char c;

	if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if(nb <= 9)
	{
		c = nb + 48;
		write(1, &c, 1);
	}
}

int test_3(int nb)
{
	int i;
	int res;

	res = 0;
	i = 0;
	while (i < nb)
	{
		res = i * 3;
		if (res == nb)
			return (1);
		i++;
	}
	return (0);
}

int test_5(int nb)
{
	int i;
	int res;

	res = 0;
	i = 0;
	while (i < nb)
	{
		res = i * 5;
		if (res == nb)
			return (1);
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	int i;
	int j;
	int res;
	int nb;

	(void)ac;
	(void)av;
	i = 0;
	j = 0;
	res = 0;
	nb = 1;

	while (nb < 101)
	{
		if (test_3(nb) == 0 && test_5(nb) == 0)
			ft_putnbr(nb);
		if (test_3(nb) == 1)
			write(1, "fizz", 4);
		if (test_5(nb) == 1)
			write(1, "buzz", 4);
		write(1, "\n", 1);
		nb++;
	}
	return 0;
}
