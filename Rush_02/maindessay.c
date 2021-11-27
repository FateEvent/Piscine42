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
//				if (!(dict[i] && ((dict[i] >= '0') && (dict[i] <= '9')) || dict[i] == '\n'))
//					return (0);
			while (dict[i] && (dict[i] == ' ' || dict[i] == ':'))
				i++;
//				if (!(dict[i] && (dict[i] == ' ' || dict[i] == ':')))
//					return (0);
			while (dict[i] && (dict[i] >= ' ' && dict[i] <= '~'))
				i++;
//				if (!(dict[i] && (dict[i] >= ' ' && dict[i] <= '~')))
//					return (0);
			while (dict[i] && (dict[i] == '\n'))
				i++;
//				if (!(dict[i] && (dict[i] == '\n')))
//					return (0);
		}
		return (1);
}

# include <stdio.h>

int main()
{
	char    *s = "t4: four\n5: five\n6  7 : six\n7    :  seven\n8: eight";
	int p = is_dict_valid(s);
	printf("%d", p);
}