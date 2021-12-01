//#include "imports.h"
#include "models.h"
#include "msg.h"

char	**ft_split(char *str, char *charset);
int     ft_strcmp(char *s1, char *s2);

char *ft_change_key(char *str)
{
	int i;
	int	j;
	char *temp;
	
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= '0' && str[i] >= '9')
		{
			temp[j] = str[i];
			j++;
		}
		i++;
	}
	return (temp);
}

char	*ft_change_value(char *str)
{
	int i;
	int	j;
	char *temp;
	
	i = -1;
	j = 0;
	while (str[++i])
	{
		while (str[i] == ' ')
			i++;
		temp[j++] = str[i];
	}
	return (temp);
}

#include <stdio.h>
int create_dict(dict *dictionary, char *str, char *sep)
{
    char **tab = ft_split(str, sep); 
    char **tmptab;
    int dictlen;
    int j;

    j = -1;
    dictlen = 0;
    while (tab[++j])
    {
        tmptab = ft_split(tab[j], ": ");
        dictionary[dictlen].key = tmptab[0];
        dictionary[dictlen].value = tmptab[1];
        dictlen++;
    }
    return (dictlen);
}

char *search_dict(dict *dictionary, char *find, int dictlen)
{
    int i;

    i = -1;
    while (++i < dictlen)
    {
        if (ft_strcmp(dictionary[i].key, find) == 0)
            return (dictionary[i].value);
    }
    return (MSG);
}

void    clean_dict(dict *dictionary, int dictlen)
{
	int index;

	index = 0;
	while (index < dictlen)
	{
		dictionary[index].key = ft_change_key(dictionary[index].key);
		dictionary[index].value = ft_change_value(dictionary[index].value);
		index++;
	}
}