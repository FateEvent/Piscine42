/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:01:35 by stissera          #+#    #+#             */
/*   Updated: 2021/11/23 17:23:30 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	pre_check(int **concat, int *tab, int SIZE, int *index_null);

int	ft_solve(int *tab, int *consigne, int *index_null, int SIZEMAX)
{
	int	i; // valeur du null index
	int	number_to_test;
	int	*concat[2];

	i = 0;
	concat[0] = &i;
	concat[1] = &number_to_test;
	number_to_test = 1;
	while (1)
	{
		if (!pre_check(concat, tab, SIZEMAX, index_null))
			return (0);
		if (index_null[i + 1]  == 99)
		{
			if (ft_double_check(tab, consigne, SIZEMAX))
				return (1);
			if (number_to_test != 4)
				number_to_test++;
		}
		else
		{
			i++;
			number_to_test = 1;
		}
	}
	return (0);
}

int	pre_check(int **concat, int *tab, int SIZE, int *index_null)
{
	int	*i;
	int	*nb_to_test;

	i = concat[0];
	nb_to_test = concat[1];
	while (!ft_check_row(index_null[*i], tab, *nb_to_test)) // Add the variable SIZE for a viariable tab
	{
		if (*nb_to_test < SIZE )
			(*nb_to_test)++;
		else
		{
			if (*i < 0)
				return 0;
			tab[index_null[*i]] = 0;
			(*i)--;
			while (tab[index_null[*i]] +1 > 4)
			{
				tab[index_null[*i]] = 0;
				(*i)--;	
			}
			*nb_to_test = tab[index_null[*i]] + 1;
		}
	}
	tab[index_null[*i]] = *nb_to_test;
	return (1);
}
