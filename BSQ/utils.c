int ft_row_counter(char *buf)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (buf[i] != '\0')
	{
		if (buf[i] == '\n')
			counter++;
		i++;
	}
	return (counter);
}

/* Je retourne counter - 1 parce que j'elimine la premiere ligne mais + 1 pour la derniere ? */

int ft_col_counter(char *buf)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (buf[i] && (buf[i] != '\n'))
		i++;
	while (buf[i] && (buf[i] != '\n'))
	{
			counter++;
			i++;
	}
	return (counter);
}

/* C'est quand qu'on free ? */