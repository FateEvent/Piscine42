/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:55:46 by faventur          #+#    #+#             */
/*   Updated: 2021/11/28 21:43:31 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/imports.h"

int	create_dict(t_dict *dictionary, char *str, char *sep)
{
	char	**tab;
	char	**tmptab;
	int		dictlen;
	int		j;

	tab = ft_split(str, sep);
	j = -1;
	dictlen = 0;
	while (tab[++j])
	{
		tmptab = ft_split(tab[j], ": ");
		dictionary[dictlen].key = tmptab[0];
		dictionary[dictlen].value = tmptab[1];
		dictlen++;
	}
	return (dictlen);
}

char	*search_dict(t_dict *dictionary, char *find, int dictlen)
{
	int	i;

	i = -1;
	while (++i < dictlen)
	{
		if (ft_strcmp(dictionary[i].key, find) == 0)
			return (dictionary[i].value);
	}
	return (DICT_MSG);
}

void	clean_dict(t_dict *dictionary, int dictlen)
{
	int	index;

	index = 0;
	while (index < dictlen)
	{
		dictionary[index].key = ft_change_key(dictionary[index].key);
		dictionary[index].value = ft_change_value(dictionary[index].value);
		index++;
	}
}

char	*ft_change_key(char *str)
{
	int		i;
	int		j;
	char	*temp;

	temp = NULL;
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= '0' && str[i] >= '9')
		{
			temp[j] = str[i];
			j++;
		}
		i++;
	}
	return (temp);
}

char	*ft_change_value(char *str)
{
	int		i;
	int		j;
	char	*temp;

	temp = NULL;
	i = -1;
	j = 0;
	while (str[++i])
	{
		while (str[i] == ' ')
			i++;
		temp[j++] = str[i];
	}
	return (temp);
}
