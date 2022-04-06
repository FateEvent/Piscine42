/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:56:23 by faventur          #+#    #+#             */
/*   Updated: 2022/04/06 18:27:21 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do-op.h"

void	ft_sum(int a, int b);
void	ft_subtraction(int a, int b);
void	ft_multiplication(int a, int b);
void	ft_division(int a, int b);
void	ft_modulo(int a, int b);

int	main(int argc, char *argv[])
{
	int		par1;
	int		par2;
	void	(*op[5])(int x, int y);

	op[0] = ft_sum;
	op[1] = ft_subtraction;
	op[2] = ft_multiplication;
	op[3] = ft_division;
	op[4] = ft_modulo;
	if (argc == 4)
	{
		if (ft_check_num(argv[1]) && ft_check_op(argv[2])
			&& ft_check_num(argv[3]))
		{
			par1 = ft_atoi(argv[1]);
			par2 = ft_atoi(argv[3]);
			if (argv[2][0] == '+')
				op[0](par1, par2);
			else if (argv[2][0] == '-')
				op[1](par1, par2);
			else if (argv[2][0] == '*')
				op[2](par1, par2);
			else if (argv[2][0] == '/')
				op[3](par1, par2);
			else if (argv[2][0] == '%')
				op[4](par1, par2);
		}
	}
	return (1);
}

int	ft_check_num(char *c)
{
	if (c[0] >= '1' && c[0] <= '9')
		return (1);
	else
		return (0);
}

int	ft_check_op(char *c)
{
	if (c[0] == '+' || c[0] == '-' || c[0] == '/'
		|| c[0] == '*' || c[0] == '%')
		return (1);
	else
		return (0);
}
