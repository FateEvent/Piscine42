/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:09:17 by faventur          #+#    #+#             */
/*   Updated: 2021/12/01 16:19:20 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str, char *charset);
int		word_counter(char *str, char *charset);
int		ft_is_separator(char c, char *charset);
void	word_writer(char *dest, char *from, char *charset);
void	split_writer(char **split, char *str, char *charset);

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		words;

	words = word_counter(str, charset);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	res[words] = 0;
	split_writer(res, str, charset);
	return (res);
}

int	word_counter(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_separator(str[i + 1], charset) == 1
			&& ft_is_separator(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

int	ft_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

void	split_writer(char **split, char *str, char *charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_separator(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (ft_is_separator(str[i + j], charset) == 0)
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			word_writer(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

void	word_writer(char *dest, char *from, char *charset)
{
	int	i;

	i = 0;
	while (ft_is_separator(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}
