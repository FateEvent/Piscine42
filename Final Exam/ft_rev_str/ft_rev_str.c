/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:07:59 by faventur          #+#    #+#             */
/*   Updated: 2022/02/05 16:07:59 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
void	ft_rev_str(char *str);

void	ft_rev_str(char *str)
{
	char	temp;
	int		start;
	int		end;
	int		zero_room;

	start = 0;
	end = ft_strlen(str) - 1;
	zero_room = ft_strlen(str);
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	str[zero_room] = '\0';
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}
