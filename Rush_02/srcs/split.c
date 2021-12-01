#include <stdlib.h>
#include "models.h"

int		is_separator(char *str, char *charset)
{
	while (*charset)
		if (*str == *charset++)
			return (1);
	return (0);
}

int		wordlen(char *str, char *charset)
{
	int i;

	i = 0;
	while (str[i] && !is_separator(str + i, charset))
		i++;
	return (i);
}

int		wordcount(char *str, char *charset)
{
	int i;
	int w;

	w = 0;
	while (*str)
	{
		while (*str && is_separator(str, charset))
			str++;
		i = wordlen(str, charset);
		str += i;
		if (i)
			w++;
	}
	return (w);
}

char	*wordcpy(char *src, int n)
{
	char	*dest;

	if (!(dest = malloc((n + 1) * sizeof(char))))
		return (NULL);
	dest[n] = '\0';
	while (n--)
		dest[n] = src[n];
	return (dest);
}

char	**split(char *str, char *charset)
{
	char	**t;
	int		size;
	int		i;
	int		n;

	size = wordcount(str, charset);
	if (!(t = malloc((size + 1) * sizeof(char*))))
		return (NULL);
	i = -1;
	while (++i < size)
	{
		while (*str && is_separator(str, charset))
			str++;
		n = wordlen(str, charset);
		if (!(t[i] = wordcpy(str, n)))
			return (NULL);
		str += n;
	}
	t[size] = 0;
	return (t);
}

/*#include <stdio.h>
int main(void)
{
    char *str = "0: zero\n1: one\n2: two";
    char *sep = "\n";
    char **tab = split(str, sep);
    char **tmptab;
    dict *dictionary;
    int dictlen;
    int j;

    dictionary = malloc(sizeof(*dictionary));
    j = -1;
    dictlen = 0;
    while (tab[++j])
    {
        tmptab = split(tab[j], ": ");
        dictionary[dictlen].key = tmptab[0];
        dictionary[dictlen].value = tmptab[1];
        dictlen++;
    }


    char *arg = "1";

    for (int i = 0; i < dictlen; i++)
    {
        if (ft_strcmp(dictionary[i].key, arg) == 0)
        {
            printf("dict -> key   == %s\n", dictionary[i].key);
            printf("dict -> value == %s\n", dictionary[i].value);
        }
    }
    
}*/