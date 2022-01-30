/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fab's Version.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:54:51 by faventur          #+#    #+#             */
/*   Updated: 2022/01/30 20:54:51 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	counter;
	int res;

	i = 0;
	counter = 0;
	res = 0;
	while (str[i] && str[i] == ' ')
		i++;
	if (str[i] && str[i] == '-')
	{
		counter++;
		i++;
	}
	if (str[i] && str[i] == '+')
		i++;
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (counter == 1)
		res *= -1;
	return (res);
}
