/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:23:48 by faventur          #+#    #+#             */
/*   Updated: 2021/11/24 23:18:52 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);
int				ft_strlcat(char *dest, char *src, unsigned int size);

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;
	unsigned int	j;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = 0;
	j = ft_strlen(dest);
	if (size < 0)
		return (0);
	while ((j < size - 1 && src[i] != '\0') && size != 0)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	if (src_len + size >= src_len + dest_len)
		return (src_len + dest_len);
	if (src_len + size < src_len + dest_len)
		return (src_len + size);
	return (0);
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
