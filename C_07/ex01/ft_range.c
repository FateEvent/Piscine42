/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:08:20 by faventur          #+#    #+#             */
/*   Updated: 2021/11/23 12:42:34 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	index;

	i = min;
	index = 0;
	if (min >= max)
		return (NULL);
	tab = malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (NULL);
	while (i < max)
	{
		tab[index] = i;
		index++;
		i++;
	}
	return (tab);
}
