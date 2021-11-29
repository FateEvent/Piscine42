/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 00:22:25 by faventur          #+#    #+#             */
/*   Updated: 2021/11/29 21:50:09 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char				*ft_strdup(char *src);
char				*ft_strcpy(char *s1, char *s2);
int					ft_strlen(char *str);
struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			index;
	int			i;

	tab = malloc (sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	index = 0;
	i = 0;
	while (index < ac)
	{
		tab[index].size = ft_strlen(av[i]);
		tab[index].str = av[i];
		tab[index].copy = ft_strdup(av[i]);
		i++;
		index++;
	}
	tab[index].str = 0;
	return (tab);
}

int	ft_strlen(char	*str)
{
	int	counter;

	counter = 0;
	if (!str)
		return (0);
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_strdup(char *src)
{
	char	*dst;

	dst = malloc (ft_strlen (src) + 1);
	if (dst == NULL)
		return (NULL);
	ft_strcpy(dst, src);
	return (dst);
}
