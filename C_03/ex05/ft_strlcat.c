/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:23:48 by faventur          #+#    #+#             */
/*   Updated: 2021/11/23 19:18:16 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
char	*ft_strlcat(char *dest, char *src, unsigned int size);

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (j < size - 1 && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
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
