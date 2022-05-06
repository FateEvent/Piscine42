/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz_bin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 23:59:49 by faventur          #+#    #+#             */
/*   Updated: 2022/05/07 00:06:54 by faventur         ###   ########.fr       */
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
		j /= 2;
		k++;
	}
	str = malloc(sizeof(char) * (k + 1));

	i = 0;
	while (n)
	{
		str[i] = n % 2 + '0';
		n /= 2;
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
