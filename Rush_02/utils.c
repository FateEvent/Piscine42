//#include "imports.h"
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s2++;
		s1++;
	}
	return (*s1 - *s2);
}


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

char	**ft_split(char *str, char *charset)
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
