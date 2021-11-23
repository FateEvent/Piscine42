/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:39:42 by lblanche          #+#    #+#             */
/*   Updated: 2021/11/23 17:22:44 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

{
	int	index;

	index = 12 - (4 * (11 - i));
	tab[index] = 1;
	tab[index + 1] = 2;
	tab[index + 2] = 3;
	tab[index + 3] = 4;
}

void	ft_fill_full_right(int *tab, int i)
{
	int	index;

	index = 12 - (4 * (11 * i)) + 3;
	tab[index] = 1;
	tab[index - 1] = 2;
	tab[index - 2] = 3;
	tab[index - 3] = 4;
}

void	v_fill(int *tab, int i)
{
	if (i < 12)
	{
		if (i == 8)
			tab[0] = 4;
		if (i == 9)
			tab[4] = 4;
		if (i == 10)
			tab[8] = 4;
		if (i == 11)
			tab[12] = 4;
	}
	else
	{
		if (i == 12)
			tab[3] = 4;
		if (i == 13)
			tab[7] = 4;
		if (i == 14)
			tab[11] = 4;
		if (i == 15)
			tab[15] = 4;
	}
}

void	ft_fill_col(int *tab, int i)
{
	if (i < 4)
	{
		tab[i] = 1;
		tab[i + 4] = 2;
		tab[i + 8] = 3;
		tab[i + 12] = 4;
	}
	else
	{
		tab[8 + i] = 1;
		tab[4 + i] = 2;
		tab[i] = 3;
		tab[i - 4] = 4;
	}
}
