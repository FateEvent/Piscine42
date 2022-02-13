/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:48:35 by faventur          #+#    #+#             */
/*   Updated: 2022/02/13 19:48:35 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <libgen.h>
#include <errno.h>
# define MAX_SIZE 2900

void	open_and_read(char *buffer, int argc, char *argv[]);
int		operand_checker(char *argument);
size_t	ft_strlen(const char *str);
void	print_enoent(char *pathname);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	open_and_write(char *buffer, int argc, char *argv[], int i);
void	open_and_append(char *buffer, int argc, char *argv[], int i);

#endif