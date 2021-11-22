/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lblanche <lblanche@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:17:07 by lblanche          #+#    #+#             */
/*   Updated: 2021/11/21 17:34:51 by lblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int	*ft_init(int size_tab);

int	*ft_init(int size_tab)
{
	int	*tab;
	int	i;

	tab = malloc ((size_tab * size_tab) * sizeof(int));
	if (tab == NULL)
		return (0);
	i = 0;
	while (i < size_tab * size_tab)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
