/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:56:06 by faventur          #+#    #+#             */
/*   Updated: 2021/11/17 19:06:50 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		if (str[i - 1] < '0' || str[i - 1] > '9' && str[i - 1] < 'A')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
        if (str[i - 1] > 'Z' && str[i - 1] < 'a' || str[i - 1] > 'z')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		if (str[i - 1] >= '0' && str[i - 1] <= '9' || str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
        i++;
	}
	return (str);
}