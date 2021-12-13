/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 08:42:18 by faventur          #+#    #+#             */
/*   Updated: 2021/12/13 11:25:20 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_len(char *s)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
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
		if (ft_check_params(argv[2], argv[3]) && ft_check_len(argv[4]))
		{
			while (argv[2][i] != '\0')
			{
				if (argv[2][i] == argv[3][0])
					ft_putchar(argv[4][0]);
				else
					ft_putchar(argv[2][i]);
				i++;
			}
		}
		else
			ft_putstr(argv[2]);
			ft_putchar('\n');
			
		}
	}
	else
		ft_putchar('\n');
	
					}
					j++;
			}
			i++;
		}
	}
	else
		return (0);
}

exit( EXIT_SUCCESS );

