/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvanbael <tvanbael@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 10:50:03 by tvanbael          #+#    #+#             */
/*   Updated: 2021/11/21 17:08:15 by lblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_str_stop_no_space_num(char *str);
int		ft_true_version_num(char *str);

int	ft_check(char *str)
{
	if (ft_strlen(str) == 0)
		return (0);
	if (ft_str_stop_no_space_num(str) == 0)
		return (0);
	if (ft_true_version_num(str) == 0)
		return (0);
	return (1);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	if (index == 31)
		return (1);
	else
		return (0);
}

int	ft_str_stop_no_space_num(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0) && (str[i] <= 31))
			return (0);
		if ((str[i] >= 33) && (str[i] <= 47))
			return (0);
		if ((str[i] >= 58) && (str[i] <= 127))
			return (0);
		i++;
	}
	return (1);
}

int	ft_true_version_num(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '1') && (str[i] <= '4'))
		{
			i++;
			continue ;
		}
		if (str[i] == 32)
		{
			i++;
			continue ;
		}
		return (0);
	}
	return (1);
}
