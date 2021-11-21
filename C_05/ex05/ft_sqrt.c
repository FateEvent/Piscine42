/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:26:06 by faventur          #+#    #+#             */
/*   Updated: 2021/11/21 15:30:47 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb);

int ft_sqrt(int nb)
{
    int i;
    
    i = 0;
    while (i < nb)
    {
        if ((i * i) == nb)
            return (i);
        i++;
    }
    return(0);
}