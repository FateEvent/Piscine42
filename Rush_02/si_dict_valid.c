int	is_dict_valid(char *dict);

int	is_dict_valid(char *dict)
{
	int	i;

	i = 0;
	if (dict[i] == '\0')
		return (0);
	while (dict[i] != '\0')
	{
		while (dict[i] && ((dict[i] >= '0') && (dict[i] <= '9')) || dict[i] == '\n')
			i++;
		while (dict[i] && (dict[i] == ' ' || dict[i] == ':'))
			i++;
		while (dict[i] && (dict[i] >= 'a' && dict[i] <= 'z'))
			i++;
		while (dict[i] && (dict[i] == '\n'))
			i++;
	}
}