/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:19:35 by faventur          #+#    #+#             */
/*   Updated: 2021/11/19 14:55:37 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb);

int ft_iterative_factorial(int nb)
{
    int i;

    i = nb;
    if (nb < 0)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    while (i > 1)
    {
        nb = nb * (i - 1);
        i--;
    }
    return (nb);
}
