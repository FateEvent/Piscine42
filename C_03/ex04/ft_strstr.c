/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:28:08 by faventur          #+#    #+#             */
/*   Updated: 2021/11/17 18:19:39 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	str_len;
	int	find_len;
	int	i;
	int	j;

	str_len = ft_strlen(str);
	find_len = ft_strlen(to_find);
	i = 0;
	j = 0;
	while (i <= str_len - find_len)
	{
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

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}
