/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 08:42:18 by faventur          #+#    #+#             */
/*   Updated: 2021/12/14 10:30:20 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	ft_check_len(char *s)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}
	if (counter == 1)
		return (1);
	else
		return (0);
}

int	ft_check_params(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_check_len(s2))
		{
			if (s1[i] == s2[0])
				return (1);
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 4)
	{
		if (ft_check_params(argv[1], argv[2]) && ft_check_len(argv[3]))
		{
			while (argv[1][i] != '\0')
			{
				if (argv[1][i] == argv[2][0])
					ft_putchar(argv[3][0]);
				else
					ft_putchar(argv[1][i]);
				i++;
			}
		}
		else
		{
			ft_putstr(argv[1]);
			ft_putchar('\n');
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
