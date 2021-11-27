/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:34:19 by faventur          #+#    #+#             */
/*   Updated: 2021/11/27 17:40:50 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define MSG "Y a un probleme!"
#include <stdio.h>

void	ft_putstr(char *str);
void    ft_check_args(char *str);	//void ou error msg ( write(2, msg, ft_strlen(msg) + 1) ) ? 

void    ft_check_args(char *str)
{
	int i;
	int cyph_count;

	i = 0;
	while (str[i] != '\0')
	{
		cyph_count++;
		if (str[i] == '-' || str[i] == '.' || str[i] == ',')
		{
			ft_putstr(MSG);
			break ;
		}
		i++;
	}
	printf("%d", cyph_count);
	if (cyph_count > 10)
		ft_putstr(MSG);
	if (cyph_count == 0)
		ft_putstr(MSG);
}
