/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 21:43:57 by faventur          #+#    #+#             */
/*   Updated: 2022/02/06 21:43:57 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
# define MAX_SIZE 5000

int		ft_args_checker(int argc, char *argv[]);
void	ft_err_putstr(char *str);
void	ft_err_putchar(char c);

int	main(int argc, char *argv[])
{
	(void)	argv;
	int		check_args;
	int		fd;
	int		bytes_read;
	char	buffer[MAX_SIZE];

	check_args = ft_args_checker(argc, argv);
	if (check_args)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (1);
	bytes_read = read(fd, &buffer, MAX_SIZE);
	if (bytes_read == -1)
	{
		ft_err_putstr("Cannot read file.\n");
		return (1);
	}
	close(fd);
	return (0);
}

int ft_args_checker(int argc, char *argv[])
{
	(void)	argv;

	if (argc == 1)
	{
		ft_err_putstr("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_err_putstr("Too many arguments.\n");
		return (1);
	}
	else
		return (0);
}

void	ft_err_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_err_putchar(str[i]);
		i++;
	}
}

void	ft_err_putchar(char c)
{
	write(2, &c, 1);
}
