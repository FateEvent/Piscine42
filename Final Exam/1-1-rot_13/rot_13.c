/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fab's Version.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:39:57 by faventur          #+#    #+#             */
/*   Updated: 2022/01/30 20:33:02 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 65 && argv[1][i] <= 77)
				|| (argv[1][i] >= 97 && argv[1][i] <= 109))
				ft_putchar(argv[1][i] + 13);
			else if ((argv[1][i] >= 78 && argv[1][i] <= 90)
				|| (argv[1][i] >= 110 && argv[1][i] <= 122))
				ft_putchar(argv[1][i] - 13);
			else
				ft_putchar(argv[1][i]);
			i++;
		}
		write(1, "\n", 1);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
