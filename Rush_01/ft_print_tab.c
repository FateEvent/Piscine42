/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:41:40 by tbrissia          #+#    #+#             */
/*   Updated: 2021/11/23 17:23:24 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

void	ft_print_tab(int *tab, int *consigne, int size)
{
	ft_step_one(consigne, size);
	ft_step_two(tab, consigne, size);
	ft_step_third(consigne, size);
}

void	ft_step_one(int *consigne, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 2)
	{
		write(1, "   ", 3);
		j = 0;
		while (j < size)
		{
			ft_putchar(' ');
			if (i == 0)
				ft_putchar(consigne[j] + '0');
			if (i == 1)
			{
				write(1, "-", 1);
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_step_two(int *tab, int *consigne, int size)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	l = 0;
	while (i < size)
	{
		j = 0;
		k = size * 2 + i;
		ft_putchar(consigne[k] + '0');
		write(1, " |", 3);
		while (j < size)
		{
			ft_putchar(' ');
			ft_putchar(tab[l++] + '0');
				j++;
		}
		k += 4;
		write(1, " | ", 3);
		ft_putchar(consigne[k] + '0');
		i++;
		ft_putchar('\n');
	}
}

void	ft_step_third(int *consigne, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 2)
	{
		write(1, "   ", 3);
		j = 0;
		while (j < size)
		{
			ft_putchar(' ');
			if (i == 0)
				write(1, "-", 1);
			else
				ft_putchar(consigne[j + size] + '0');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
