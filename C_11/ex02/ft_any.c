/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:30:16 by faventur          #+#    #+#             */
/*   Updated: 2021/12/01 22:00:24 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_any(char **tab, int (*f)(char*));

int main()
{

}

void	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] == '\0')
		return (s1[i]);
	if (s1[i] == '\0')
		return (-s2[i]);
	return (0);
}
