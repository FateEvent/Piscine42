# include "ft.h"

void	open_and_read(char *buffer, int argc, char *argv[])
{
	(void)	argv;
	int		fd;
	int		bytes_read;
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (i < argc && !operand_checker(argv[i]))
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			print_enoent(argv[i]);
		else
		{
			bytes_read = read(fd, &buffer[j], MAX_SIZE - j);
			if (bytes_read == -1)
				return ;
			close(fd);
			buffer[bytes_read + j] = '\0';
			while (buffer[j] != '\0')
				j++;
		}
		i++;
	}
}

void	print_enoent(char *pathname)
{
	ft_putstr("cat: ");
	ft_putstr(basename(pathname));
	ft_putstr(": ");
	ft_putstr(strerror(ENOENT));
	ft_putchar('\n');
}

void	open_and_write(char *buffer, int argc, char *argv[], int i)
{
	(void)	argc;
	(void)	argv;
	int		fd;
	int		bytes_written;

	fd = open(argv[i + 1], O_WRONLY | O_CREAT);
	if (fd == -1)
		return ;
	bytes_written = write(fd, buffer, ft_strlen(buffer));
	if (bytes_written == -1)
		return ;
	close(fd);
}

void	open_and_append(char *buffer, int argc, char *argv[], int i)
{
	(void)	argc;
	(void)	argv;
	int		fd;
	int		added_bytes;

	fd = open(argv[i + 1], O_WRONLY | O_CREAT | O_APPEND);
	if (fd == -1)
		return ;
	added_bytes = write(fd, buffer, ft_strlen(buffer));
	if (added_bytes == -1)
		return ;
	close(fd);
}
