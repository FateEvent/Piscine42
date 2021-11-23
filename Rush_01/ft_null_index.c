/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_null_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:17:06 by tbraquem          #+#    #+#             */
/*   Updated: 2021/11/23 17:23:09 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_null_index(int *tab, int size);
void	get_new_array_size(int *array_size, int *tab, int size);

int	*ft_null_index(int *tab, int size)
{
	int	i;
	int	j;
	int	array_size;
	int	*new_array;

	i = 0;
	j = 0;
	array_size = 0;
	new_array = NULL;
	get_new_array_size(&array_size, tab, size);
	new_array = malloc(sizeof(int) * (array_size + 1));
	if (new_array == NULL)
		return (0);
	while (i < size * size) // Ajout de size^2
	{
		if (tab[i] == 0)
		{
			new_array[j] = i;
			j++;
		}
		i++;
	}
	new_array[j] = 99;
	return (new_array);
}

void	get_new_array_size(int *array_size, int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size * size) // Ajout du size^2
	{
		if (tab[i] == 0)
		{
			*array_size = *array_size + 1;
		}
		i++;
	}
}
