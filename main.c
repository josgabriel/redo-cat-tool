#include "ft_display_file.c"

int main(int argc, char **argv)
{
	if (argc < 2)
		write(2, "file name missing\n", 18);
	else if (argc > 2)
		write(2, "too many arguments\n", 19);
	else
		ft_display_file(argv[1]);
	return (0);
}
