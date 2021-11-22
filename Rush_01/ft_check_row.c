/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_row.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroth <mroth@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:18:06 by mroth             #+#    #+#             */
/*   Updated: 2021/11/21 17:43:05 by lblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_row(int null_index, int *tab, int value);
int	ft_check_x(int *tab, int value, int x);
int	ft_check_y(int *tab, int value, int y);
int	ft_where_x(int null_index);
int	ft_where_y(int null_index);

int	ft_check_row(int null_index, int *tab, int value)
{
	int	x;
	int	y;

	x = ft_where_x(null_index);
	y = ft_where_y(null_index);
	if (ft_check_x(tab, value, x)
	    && ft_check_y(tab, value, y))
		return (1);
	else
		return (0);
}

int	ft_where_x(int null_index)
{
	if (null_index <= 3)
		return (0);
	else if (null_index <= 7)
		return (4);
	else if (null_index <= 11)
		return (8);
	else
		return (12);
}

int	ft_where_y(int null_index)
{
	int	i;

	i = null_index;
	if (i == 0 || i == 4 || i == 8 || i == 12)
		return (0);
	else if (i == 1 || i == 5 || i == 9 || i == 13)
		return (1);
	else if (i == 2 || i == 6 || i == 10 || i == 14)
		return (2);
	else
		return (3);
}	

int	ft_check_x(int *tab, int value, int x)
{
	int	i;

	i = 4;
	while (i--)
	{
		if (tab[x] == value)
			return (0);
		x++;
	}
	return (1);
}

int	ft_check_y(int *tab, int value, int y)
{
	int	i;

	i = 4;
	while (i--)
	{
		if (tab[y] == value)
			return (0);
		y += 4;
	}
	return (1);
}
