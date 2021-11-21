/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:26:06 by faventur          #+#    #+#             */
/*   Updated: 2021/11/21 14:25:39 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_abs(int nb);
int ft_sqrt(int nb);

int ft_sqrt(int nb)
{
    int s = nb;

    while ((s - nb / s) > 0) //loop until precision satisfied 
    {
        s = (s + nb / s) / 2;
    }
    return (s);
}

int ft_abs(int nb)
{
    if (nb < 0)
        nb *= -1;
    return (nb);
}
