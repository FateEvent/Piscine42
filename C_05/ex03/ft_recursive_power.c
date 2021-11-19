/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:19:45 by faventur          #+#    #+#             */
/*   Updated: 2021/11/19 15:25:15 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power);

int ft_recursive_power(int nb, int power)
{
    if (nb < 0)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    if (nb > 1)
        return nb * ft_recursive_power(power - 1);
    return (0);
}