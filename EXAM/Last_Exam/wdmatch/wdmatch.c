#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i;
	int j;
	int count;
	int len;

	i = 0;
	j = 0;
	count = 0;
	len = 0;
	if(ac != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (av[1][len])
		len++;
	while (av[1][i])
	{
		while(av[2][j])
		{
			if (av[1][i] == av[2][j])
			{
				count++;
				break ;
			}
			j++;
		}
		i++;
	}
	if (count == len)
		ft_putstr(av[1]);
	write (1, "\n", 1);
	return (0);
}
