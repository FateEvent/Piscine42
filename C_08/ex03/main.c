/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:48:04 by faventur          #+#    #+#             */
/*   Updated: 2021/11/24 16:06:19 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "ft_point.h"

void    set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int main(void)
{
	t_point	point;
	
	set_point(&point);
	//printf("%d, %d", point.x, point.y);
	return(0);
}