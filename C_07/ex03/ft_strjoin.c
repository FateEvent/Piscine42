/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:12:12 by faventur          #+#    #+#             */
/*   Updated: 2021/11/27 22:10:04 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);
char	*ft_strcpy(char *s1, char *s2);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strjoin(int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		sep_len;
	int		index;
	int		strsize;

	str = ft_strdup(strs[0]);
	sep_len = ft_strlen(sep);
	index = 1;
	strsize = ft_strlen(str);
	while (index < size)
	{
		strsize += ft_strlen(strs[index]);
		index++;
	}
	index = 1;
	str[strsize] = (char)malloc ((strsize + (size - 1)
				* sep_len + 1) * sizeof(char));
	while (size > 1)
	{
		str = ft_strcat(str, sep);
		str = ft_strcat(str, strs[index]);
		size--;
		index++;
	}
	return (str);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int	ft_strlen(char	*str)
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

char	*ft_strdup(char *src)
{
	char	*dst;

	dst = malloc (ft_strlen (src) + 1);
	if (dst == NULL)
		return (NULL);
	ft_strcpy(dst, src);
	return (dst);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
