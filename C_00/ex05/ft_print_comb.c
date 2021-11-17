/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:13:49 by faventur          #+#    #+#             */
/*   Updated: 2021/11/11 13:07:46 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int	tab[3];

	while (tab[0] <= 7)
	{
		tab[1] = tab[0] + 1;
		while (tab[1] <= 8)
		{
			tab[2] = tab[1] + 1;
			while (tab[2] <= 9)
			{
				ft_putchar(tab[0] + '0');
				ft_putchar(tab[1] + '0');
				ft_putchar(tab[2] + '0');
				if (tab[0] + tab[1] + tab[2] != 24)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				tab[2]++;
			}
			tab[1]++;
		}
		tab[0]++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
