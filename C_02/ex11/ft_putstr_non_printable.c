/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:07:04 by faventur          #+#    #+#             */
/*   Updated: 2021/11/17 21:32:44 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_convert_to_hexa(int n);
void	ft_putstr_non_printable(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert_to_hexa(int n)
{
	int	left;
	int	right;

	left = n / 16;
	right = n % 16;
	write(1, "\\", 2);
	ft_putchar(left + '0');
	if (right <= 9)
		ft_putchar(right + '0');
	else if (right == 10)
		ft_putchar('a');
	else if (right == 11)
		ft_putchar('b');
	else if (right == 12)
		ft_putchar('c');
	else if (right == 13)
		ft_putchar('d');
	else if (right == 14)
		ft_putchar('e');
	else if (right == 15)
		ft_putchar('f');
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
		{
			write(1, &str[i], 1);
		}
		else
			ft_convert_to_hexa(str[i]);
		i++;
	}
}
