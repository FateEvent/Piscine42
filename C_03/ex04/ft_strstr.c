/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:28:08 by faventur          #+#    #+#             */
/*   Updated: 2021/11/24 19:39:05 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str);
char			*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	str_len;
	unsigned int	find_len;
	unsigned int	i;
	unsigned int	j;

	str_len = ft_strlen(str);
	find_len = ft_strlen(to_find);
	i = 0;
	if (str_len < find_len)
		return (NULL);
	while (i <= str_len - find_len)
	{
		j = 0;
		while (j < find_len)
		{
			if (str[i + j] != to_find[j])
				break ;
			j++;
		}
		if (j == find_len)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}
