#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *str_rev(char *str)
{
	int i;
	int j;
	char c;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
	return (str);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main(int ac, char **av)
{
	if(ac == 2)
	{
		str_rev(av[1]);
		ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
