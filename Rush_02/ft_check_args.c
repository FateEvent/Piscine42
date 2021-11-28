/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:34:19 by faventur          #+#    #+#             */
/*   Updated: 2021/11/27 17:40:50 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_args(char *str)
{
	int i;
	int cyph_count;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			cyph_count++;
		if (str[i] < '0' && str[i] > '9')
			return (0);
		if (str[i] == '-' || str[i] == '.' || str[i] == ',')
			return (0);
		i++;
	}
	if (cyph_count > 10 || cyph_count == 0)
		return (0);
	return (1);
}
