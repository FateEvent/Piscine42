/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlda-s <carlda-s@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 09:22:07 by carlda-s          #+#    #+#             */
/*   Updated: 2021/11/21 18:07:08 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_remove_space(char	*str, int *sizemax);
int		*ft_atoi(char	*str, int *sizemax);
int		ft_sqrt(int nb);

int		ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i < nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return(0);
}

char	*ft_remove_space(char	*str, int *sizemax)
{
	char	*strwsp;
	int		i;
	int		j;
	int		size;

	size = 0;
	strwsp = malloc(16 * sizeof(char) + 1);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			strwsp[j] = str[i];
			j++;
			i++;
			size++;
		}
		else
			i++;
	}
	*sizemax = ft_sqrt(size);
	strwsp[j] = '\0';
	return (strwsp);
}

int	*ft_atoi(char *str, int *sizemax)
{
	int		i;
	int		*tab;
	char	*strwsp;

	strwsp = ft_remove_space(str, sizemax);
	tab = malloc(16 * sizeof(int));
	i = 0;
	while (i < 16)
	{
		tab[i] = strwsp[i] - 48;
		i++;
	}
	free(strwsp);
	return (tab);
}
