#include <fcntl.h>
#include <unistd.h>

#define BUFFER 1000

void ft_display_file(char *buf)
{
	int		fd;
	char	conteudo[BUFFER];
	int		s;

	fd = open (buf, O_RDONLY);
	s = read(fd, conteudo, BUFFER);
	if (fd < 0 || s < 0)
		write(2, "cannot read file\n", 17);
	write(1, conteudo, s);

	close(fd);
}
