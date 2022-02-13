/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 21:43:57 by faventur          #+#    #+#             */
/*   Updated: 2022/02/06 21:43:57 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft.h"

int	main(int argc, char *argv[])
{
	(void)	argv;
	int		i;
	char	buffer[MAX_SIZE];

	i = 0;
	open_and_read(buffer, argc, argv);
	while (i++ < argc)
	{
		if (operand_checker(argv[i]) == 1)
		{
			open_and_write(buffer, argc, argv, i);
			return (0);
		}
		else if (operand_checker(argv[i]) == 2)
		{
			open_and_append(buffer, argc, argv, i);
			return (0);
		}
	}
	ft_putstr(buffer);
	return (0);
}
