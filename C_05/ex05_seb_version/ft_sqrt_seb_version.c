/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_seb_version.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:02:05 by faventur          #+#    #+#             */
/*   Updated: 2021/11/26 11:02:07 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (1)
	{
		if (i * i > nb || i == 46341)
			return (0);
		else if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
