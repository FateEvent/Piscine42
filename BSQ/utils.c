#include <stdio.h>

/* Je retourne counter - 1 parce que j'elimine la premiere ligne mais + 1 pour la derniere ? */

int ft_get_number_columns(char **argv)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (argv[1][i] && (argv[1][i] != '\n'))
	{
			counter++;
			i++;
	}
	return (counter);
}

int ft_get_number_lines(char **argv)
{
	int	i;
	int	j;
	int counter;

	i = 1;
	j = 0;
	counter = 0;
	while (argv[i][j] != '\0')
	{
		if (argv[i][j] == '\n')
		{
			counter++;
			i++;
			j = 0;
		}
		j++;
	}
	return (counter + 1);
}

/* C'est quand qu'on free ? */

int	main()
{
	char	*str[] = {"4 .ox\n", "aaaaaaa\n", "aaaaaaa\n", "aaaaaaa\n", "aaaaaaa\0"};
	int	c = ft_get_number_columns(str);
	int	r = ft_get_number_lines(str);
	printf("%d, \n%d", r, c);
}