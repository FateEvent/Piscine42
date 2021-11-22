/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:45:13 by faventur          #+#    #+#             */
/*   Updated: 2021/11/22 17:30:04 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int _c);
int	ft_abs(int nb);
int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	minus_count;

	i = 0;
	res = 0;
	minus_count = 0;
	while (str[i] < 'a' || str[i] > 'z')
	{
		if (ft_isspace(str[i]) == 0 && str[i] == '-')
			minus_count++;
		if (ft_isspace(str[i]) == 0 && str[i] >= '0' && str[i] <= '9')
			res = res * 10 + str[i] - '0';
		++i;
	}
	if (minus_count % 2 == 1)
			res = ft_abs(res);
	return (res);
}

int	ft_isspace(int _c)
{
	if (_c >= '\t' && _c <= '\r' || _c == ' ')
		return (1);
	else
		return (0);
}

int	ft_abs(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}
