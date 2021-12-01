/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imports.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:54:57 by faventur          #+#    #+#             */
/*   Updated: 2021/11/28 22:07:54 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMPORTS_H
# define IMPORTS_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include "models.h"
# include "msg.h"

void	ft_putstr(char *str);
void	ft_putchar(char c);
char	**ft_split(char *str, char *charset);
int		ft_strcmp(char *s1, char *s2);
int		is_separator(char *str, char *charset);
int		wordlen(char *str, char *charset);
int		wordcount(char *str, char *charset);
char	*wordcpy(char *src, int n);

int		create_dict(t_dict *dictionary, char *str, char *sep);
char	*search_dict(t_dict *dictionary, char *find, int dictlen);
void	clean_dict(t_dict *dictionary, int dictlen);
char	*ft_change_key(char *str);
char	*ft_change_value(char *str);

int		open_file(char *filename);
char	*read_file(int filedesc);

int		ft_check_args(char *str);
int		ft_verif(int argc, char *argv[], char *find, char *filename);
void	dict_opening(t_dict *dict, char *filename, char *argv[], char *found);

#endif