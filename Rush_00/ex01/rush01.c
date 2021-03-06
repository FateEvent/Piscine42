/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroth <mroth@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:49:04 by mroth             #+#    #+#             */
/*   Updated: 2021/11/19 13:52:21 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	print_first_line(int x);
void	ft_putchar(char c);
void	insert_space(int x);
void	print_vertically(int x, int y);
void	print_last_line(int x);

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	print_first_line(x);
	if (y == 2)
		print_last_line(x);
	else if (y > 2)
	{
		print_vertically(x, y);
		print_last_line(x);
	}
	else
		return ;
}

void	print_first_line(int x)
{
	ft_putchar('/');
	x--;
	while (x > 1)
	{
		ft_putchar('*');
		x--;
	}
	if (x == 1)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	print_vertically(int x, int y)
{
	if (x == 1)
	{
		while (y > 2)
		{
			ft_putchar('*');
			ft_putchar('\n');
			y--;
		}
	}
	else
	{
		while (y > 2)
		{
			ft_putchar('*');
			insert_space(x);
			ft_putchar('*');
			ft_putchar('\n');
			y--;
		}
	}
}

void	insert_space(int x)
{
	while (x > 2)
	{
		ft_putchar(' ');
		x--;
	}
}

void	print_last_line(int x)
{
	ft_putchar('\\');
	x--;
	while (x > 1)
	{
		ft_putchar('*');
		x--;
	}
	if (x == 1)
		ft_putchar('/');
}
