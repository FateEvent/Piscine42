/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 23:58:55 by faventur          #+#    #+#             */
/*   Updated: 2022/05/07 00:06:58 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	int		i;
	int		j;
	int		k;
	int		tot;
	char	*str;

	j = n;
	k = 0;
	while (j)
	{
		j /= 16;
		k++;
	}
	str = malloc(sizeof(char) * (k + 1));
	i = 0;
	while (n)
	{
		tot = n % 16;
		if (tot <= 9)
			str[i] = tot + '0';
		else if (tot == 10)
			str[i] = 'a';
		else if (tot == 11)
			str[i] = 'b';
		else if (tot == 12)
			str[i] = 'c';
		else if (tot == 13)
			str[i] = 'd';
		else if (tot == 14)
			str[i] = 'e';
		else if (tot == 15)
			str[i] = 'f';
		n /= 16;
		i++;
	}
	str[i] = '\0';
	i--;
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
	free(str);
}

int main()
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizz buzz", 9);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(i);
		ft_putchar('\n');
		i++;
	}
}
