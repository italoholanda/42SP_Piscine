#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
				write(1, &argv[i][j++], 1);
			write(1, "\n", 1);
			++i;
		}
	}
	return (0);
}
