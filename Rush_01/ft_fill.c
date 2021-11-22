/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lblanche <lblanche@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:25:34 by lblanche          #+#    #+#             */
/*   Updated: 2021/11/21 17:52:20 by lblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "function.h"

void	ft_check_v_cons(int *tab, int *cons)
{
	int	i;

	i = 8;
	while (i < 16)
	{
		if (cons[i] == 1 && i < 12)
			v_fill(tab, i);
		if (cons[i] == 1 && i > 11)
			v_fill(tab, i);
		if (cons[i] == 4)
		{
			if (i < 12)
				ft_fill_full_left(tab, i);
			else
				ft_fill_full_right(tab, i);
		}
		i++;
	}
}

void	ft_check_h_cons(int *tab, int *cons)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (cons[i] == 1 && i < 4)
			tab[i] = 4;
		if (cons[i] == 1 && i > 3)
			tab[8 + i] = 4;
		if (cons[i] == 4)
			ft_fill_col(tab, i);
		i++;
	}
}

void	ft_fill(int *tab, int *cons)
{
	ft_check_h_cons(tab, cons);
	ft_check_v_cons(tab, cons);
}
