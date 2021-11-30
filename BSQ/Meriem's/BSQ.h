#ifndef __FT_BSQ_H__
# define __FT_BSQ_H__
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>

typedef	struct s_coordinates
{
	int	x;
	int	y;
}		t_coord;


void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_get_number_lines(char **argv);
int			ft_size_file(char *argv);
int			ft_get_number_columns(char **argv);
void		ft_get_second_line(int fd);
char		**ft_read_file(char *argv);
#endif