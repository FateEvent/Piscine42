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
#include <libgen.h>
# define MAX_SIZE 2900

int		operand_checker(char *argument);
void	open_and_append(char *buffer, int argc, char *argv[])
void	open_and_write(char *buffer, int argc, char *argv[]);
void	open_and_read(char *buffer, int argc, char *argv[]);
int		ft_args_checker(int argc, char *argv[]);
void	ft_putstr(char *str); // to keep
void	ft_putchar(char c); // to keep
size_t	ft_strlen(const char *str); // to keep
char	*ft_strstr(const char *haystack, const char *needle); // to keep

int	main(int argc, char *argv[])
{
	(void)	argv;
	int		check_args;
	int     i;
	char	buffer[MAX_SIZE];

	i = 0;
	open_and_read(buffer, argc, argv);
	while (i++ < argc)
	{
		if (operand_checker(argv[i]) == 1)
		{
			open_and_write(buffer, argc, argv, i);
			return (0);
		}
		else if (operand_checker(argv[i]) == 2)
		{
			open_and_append(buffer, argc, argv, i);
			return (0);
		}
	}
	ft_putstr(buffer);
	return (0);
}

void	open_and_read(char *buffer, int argc, char *argv[])
{
	(void)	argv;
	int		fd;
	int		bytes_read;
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (i++ < argc)
	{
		if (ft_strstr(argv[i], ".txt") != NULL)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd == -1)
				return ;
			bytes_read = read(fd, &buffer[j], MAX_SIZE - j);
			if (bytes_read == -1)
				return ;
			close(fd);
			buffer[bytes_read + j] = '\0';
			while (buffer[j] != '\0')
				j++;
		}
	}
}

int	operand_checker(char *argument)
{
	if (ft_strlen(argument) == 1 && argument[0] == '>')
		return (1);
	else if (ft_strlen(argument) == 2 && argument[0] == '>' && argument[0] == '>')
		return (2);
	else
		return (0);
}

void	open_and_write(char *buffer, int argc, char *argv[], int i)
{
	(void)	argv;
	int		fd;
	int		bytes_written;

	if (ft_strstr(argv[i + 1], ".txt") != NULL)
	{
		fd = open(argv[i + 1], O_WRONLY);
		if (fd == -1)
			return ;
		bytes_written = write(fd, buffer, ft_strlen(buffer));
		if (bytes_written == -1)
			return ;
		close(fd);
	}
}

void	open_and_append(char *buffer, int argc, char *argv[], int i)
{
	(void)	argv;
	int		fd;
	int		added_bytes;

	if (ft_strstr(argv[i + 1], ".txt") != NULL)
	{
		fd = open(argv[i + 1], O_APPEND);
		if (fd == -1)
			return ;
		added_bytes = write(fd, buffer, ft_strlen(buffer));
		if (added_bytes == -1)
			return ;
		close(fd);
	}
}

int    ft_args_checker(int argc, char *argv[])
{
	(void)	argv;

	if (argc == 1)
		return (1);
	if (argc > 2)
		return (1);
	else
		return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	str_len;
	size_t	find_len;
	size_t	i;
	size_t	j;

	str_len = ft_strlen(haystack);
	find_len = ft_strlen(needle);
	i = 0;
	if (str_len < find_len)
		return (NULL);
	while (i <= str_len - find_len)
	{
		j = 0;
		while (j < find_len)
		{
			if (haystack[i + j] != needle[j])
				break ;
			j++;
		}
		if (j == find_len)
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	counter;

	counter = 0;
	if (str == NULL)
		return (0);
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}
