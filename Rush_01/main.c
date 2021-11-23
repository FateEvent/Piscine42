/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:32:34 by stissera          #+#    #+#             */
/*   Updated: 2021/11/23 17:23:51 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "function.h"

int	ft_goto_solve(int *tab, int *cons, int *null_index, int sizemax);

int	main(int argc, char **argv)
{
	int	sizemax;
	int	*tab;
	int	*null_index;
	int	*cons;

	if (argc != 2)
	{
		write (2, "Error, no good parameters!", 26);
		return (1);
	}
	if (!ft_check(argv[1]))
		return (1);

	cons = ft_atoi(argv[1], &sizemax);

	if (!ft_verify_tab(cons))
		return (1);
	tab = ft_init(sizemax);
	ft_fill(tab, cons);
	null_index = ft_null_index(tab, sizemax);
	if (!ft_goto_solve(tab, cons, null_index, sizemax))
		return (0);
	free(tab);
	free(null_index);
	return (1);
}

int	ft_goto_solve(int *tab, int *cons, int *null_index, int sizemax)
{
	if (ft_solve(tab, cons, null_index, sizemax))
	{
		ft_print_tab(tab, cons, sizemax);
		free(tab);
		free(null_index);
		return (0);
	}
	return (1);
}
