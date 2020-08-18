#include <unistd.h>

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	write(1, "9876543210", 10);
	write(1, "\n", 1);
	return 0;
}
