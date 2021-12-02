#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main()
{
	char *ba[] = {"wwwwwwwwwwwwwww", "eeeeeeeeeeeeeeeeeeeee", "tttttttttttttttttttttt"};
	char *strs[] = {"bonjour", "les", "amis" , "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "ccccccccccccccccccccccccccccc", "dddddddddddddddddddddddd"};
	char *gf[] = {"hhhhhhhhhhhhhhh", "jjjjjjjjjjjjjjjj", "dddddddddddd"};
	char *sep = " ";
	char *t = ft_strjoin(3, ba, sep);
	char	*p = ft_strjoin(7, strs, sep);
	char *k = ft_strjoin(3, gf, sep);
	printf("%s\n", p);
	printf("%s\n", k);
	printf("%s\n", t);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char    *arr;
	int     i;
	int     j;
	int     c;
	int     k;

	k = 0;
	i = 0;
	arr = (char *)malloc(sizeof(strs));	//il faudrait calculer dans le malloc la taille des sep
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			arr[k] = strs[i][j];
			j++;
			k++;
		}
		c = 0;
		while (sep[c] != '\0' && i < size - 1)
			arr[k++] = sep[c++];
		i++;
	}
	arr[k] = '\0';
	return (arr);
}