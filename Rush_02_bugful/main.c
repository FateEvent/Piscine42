/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:28:23 by faventur          #+#    #+#             */
/*   Updated: 2021/12/01 13:47:46 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/imports.h"

int	main(int argc, char *argv[])
{
	t_dict	*dictionary;
	char	*filename;
	char	*find;
	char	*found;

	filename = "srcs/numbers.dict";
	dictionary = NULL;
	find = NULL;
	found = NULL;
	if (ft_verif(argc, argv, find, filename) == 0)
	{
		int		filedesc;
		char	*str;
		int		dictlen;

	str = NULL;
	dictionary = malloc(sizeof(*dictionary) * BUF_SIZE);
	filedesc = open_file(filename);
	str = read_file(filedesc);
	dictlen = create_dict(dictionary, str, "\n");
	clean_dict(dictionary, dictlen);
	found = search_dict(dictionary, argv[1], dictlen);
		return (0);
	}
	return (0);
}
