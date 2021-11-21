/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_var.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:03:55 by faventur          #+#    #+#             */
/*   Updated: 2021/11/21 18:08:33 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_sqrt(double nb);

double	ft_sqrt(double nb)
{
	double	error;
	double	s;

	error = 0.00001;
	s = nb;
	while ((s - nb / s) > error)
	{
		s = (s + nb / s) / 2;
	}
	return (s);
}
