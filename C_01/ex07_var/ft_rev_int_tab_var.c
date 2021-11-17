/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab_var.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:46:00 by faventur          #+#    #+#             */
/*   Updated: 2021/11/15 13:48:51 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux[size];
	int	i;

	i = 0;
	while (i < size)
	{
		aux[size - 1 - i] = tab[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = aux[i];
		i++;
	}
}
