/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:28:23 by faventur          #+#    #+#             */
/*   Updated: 2021/11/28 22:07:15 by faventur         ###   ########.fr       */
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
		ft_putstr(DICT_MSG);
		return (0);
	}
	dict_opening(dictionary, filename, argv, found);
	return (0);
}
