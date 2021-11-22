/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 20:43:44 by aguemazi          #+#    #+#             */
/*   Updated: 2021/11/21 14:34:18 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_tab(int *tab, int size)
{
	int		i;
	int		j;

	i = 1;
	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			if (j > 1)
				ft_putchar(' ');
			ft_putchar(tab[j * i] + '0');
			j++;
		}
		if (i < size)
			ft_putchar('\n');
		i++;
	}
}
