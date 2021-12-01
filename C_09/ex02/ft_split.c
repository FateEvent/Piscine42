/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:31:55 by faventur          #+#    #+#             */
/*   Updated: 2021/12/01 10:59:13 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split(char *str, char *charset);

char	**ft_split(char *str, char *charset)
{
	int sep_len;

	sep_len = ft_strlen(charset);
}

int ft_check_sep (char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		else if (c == '\0')
			return (1);
		i++;
	}
}