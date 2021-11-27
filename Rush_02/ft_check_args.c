/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:34:19 by faventur          #+#    #+#             */
/*   Updated: 2021/11/27 16:17:44 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define MSG "Y a un probleme!"
# include "ft.h"

void    ft_check_args(char *str);	//void ou error msg ( write(2, msg, ft_strlen(msg) + 1) ) ? 

void    ft_check_args(char *str)
{
	int i;
	int cyph_count;

	i = 0;
	while (str[i] != '\0')
	{
		cyph_count++;
	}
	if (cyph_count > 10)
		ft_putstr(MSG);
	if (cyph_count == 0)
		ft_putstr(MSG);
}
