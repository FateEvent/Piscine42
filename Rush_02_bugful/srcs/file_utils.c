/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:03:54 by faventur          #+#    #+#             */
/*   Updated: 2021/12/01 13:43:02 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/imports.h"

int	open_file(char *filename)
{
	int	filedesc;

	filedesc = open(filename, O_RDONLY);
	return (filedesc);
}

char	*read_file(int filedesc)
{
	int		size;
	char	*dict_str;

	dict_str = (char *)malloc(sizeof(char) * BUF_SIZE);
	size = read(filedesc, dict_str, BUF_SIZE);
	dict_str[size] = '\0';
	free(dict_str);
	close(filedesc);
	return (dict_str);
}

int	ft_check_args(char *str)
{
	int	i;
	int	cyph_count;

	i = 0;
	cyph_count = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			cyph_count++;
		if (str[i] < '0' && str[i] > '9')
			return (0);
		if (str[i] == '-' || str[i] == '.' || str[i] == ',')
			return (0);
		i++;
	}
	if (cyph_count > 10 || cyph_count == 0)
		return (0);
	return (1);
}

int	ft_verif(int argc, char *argv[], char *find, char *filename)
{
	if (argc == 1 || argc > 3)
		return (0);
	else if (argc == 2 && ft_check_args(argv[1]) == 0)
		return (0);
	else if (argc == 3 && ft_check_args(argv[2]) == 0)
		return (0);
	if (argc == 2 && ft_check_args(argv[1]) == 1)
		find = argv[1];
	if (argc == 3 && ft_check_args(argv[2]) == 1)
	{
		filename = argv[1];
		find = argv[2];
	}
	return (1);
}
