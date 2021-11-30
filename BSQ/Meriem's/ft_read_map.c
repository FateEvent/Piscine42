#include "BSQ.h"

int	ft_size_file(char *argv)
{
	int size;
	char buf;
	int fd;

	size = 0;
	fd = open(argv, O_RDONLY);
	while (read(fd, &buf, 1))
	{
		size++;
	}
	close(fd);
	return (size);
}


void	ft_get_second_line(int fd)
{
	int i;
	char *buf;

	i = 0;
	if ((buf = malloc(4096 *sizeof(char))) == NULL)
		return ;
	while (read(fd, &buf[i], 1))
	{
		if (buf[i] == '\n')
			break;
		i++;
	}
}

char	**ft_read_file(char *argv)
{
	char **buf;
	int i;
	int fd;
	int c;
	int ret;
	int l;

	i = 0;
	ret = 0;
	c = ft_get_number_columns(argv);
	l = ft_get_number_lines(argv);
	fd = open(argv, O_RDONLY);
	ft_get_second_line(fd);
	if ((buf = malloc(l * sizeof(char*))) == NULL)
		return NULL;
	while (i < l)
	{
		if ((buf[i] = malloc(c * sizeof(char))) == NULL)
			return NULL;
		i++;
	}
	i = 0;
	while (i < l)
	{
		if ((ret = read(fd, buf[i], c)) == - 1)
			return NULL;
		buf[i++][c - 1] = '\0';
	}
	close (fd);
	return (buf);
}