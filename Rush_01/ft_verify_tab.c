/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 10:15:37 by tbraquem          #+#    #+#             */
/*   Updated: 2021/11/21 14:32:28 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_verify_tab(int *tab);
int	check_values(int *tab, int index);
// Index = 0 , check vertical clues & index = 4 check horizontal clues.

int	ft_verify_tab(int *tab)
{
	int	i;
	int	sum;
	int	number_of_one;

	i = 0;
	sum = 0;
	number_of_one = 0;
	while (i < 16)
	{
		sum = sum + tab[i];
		if (tab[i] == 1)
			number_of_one++;
		i++;
	}
	if (sum < 32 || sum > 35)
		return (0);
	else if (number_of_one != 4)
		return (0);
	if (!check_values(tab, 0) || !check_values(tab, 8))
		return (0);
	return (1);
}

// Check vertical values && horizontal values.
int	check_values(int *tab, int index)
{
	int	i;
	int	fail;

	i = index;
	fail = 0;
	while (i < (index + 4))
	{
		if ((tab[i] + tab[i + 4]) < 3 || tab[i] + tab[i + 4] > 5)
			fail++;
		i++;
	}
	if (fail)
		return (0);
	return (1);
}
