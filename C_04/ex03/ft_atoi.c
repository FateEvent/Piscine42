/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:45:13 by faventur          #+#    #+#             */
/*   Updated: 2021/11/25 14:49:48 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	minus_count;

	i = 0;
	res = 0;
	minus_count = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] && ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' '))
		i++;
	while (str[i] && ((str[i] == '+') || str[i] == '-'))
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	while (str[i] && ((str[i] >= '0') && str[i] <= '9'))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (minus_count % 2 == 1)
		res = -res;
	return (res);
}
