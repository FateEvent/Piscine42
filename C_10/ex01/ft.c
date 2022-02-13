# include "ft.h"

int	operand_checker(char *argument)
{
	if (ft_strlen(argument) == 1 && argument[0] == '>')
		return (1);
	else if (ft_strlen(argument) == 2 && argument[0] == '>' && argument[0] == '>')
		return (2);
	else
		return (0);
}

size_t	ft_strlen(const char *str)
{
	size_t	counter;

	counter = 0;
	if (str == NULL)
		return (0);
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
