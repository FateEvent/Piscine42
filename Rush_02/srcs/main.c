//#include "imports.h"
#include "models.h"
#include <stdlib.h>
#include <unistd.h>

char    *search_dict(dict *dictionary, char *find, int dictlen);
void    clean_dict(dict *dictionary, int dictlen);
int     create_dict(dict *dictionary, char *str, char *sep);
int     open_file(char *filename);
int		ft_check_args(char *str);
char    *read_file(int filedesc);
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

#include <stdio.h>
#include "msg.h"

int ft_verif(int argc, char *argv[], char *find, char *filename)
{
	if (argc == 1 || argc > 3)
		return (0);
	else if (argc == 2 && ft_check_args(argv[1]) == 0)
		return (0);
	else if (argc == 3 && ft_check_args(argv[2]) == 0)
		return (0);
	if (argc == 2 && ft_check_args(argv[1]) == 1)
		find = argv[1];
	if (argc == 3 && ft_check_args(argv[2]) == 1)
	{
		filename = argv[1];
		find = argv[2];
	}
	return (1);
}

int main(int argc, char *argv[])
{
	char	*filename = "../numbers.dict";
	dict *dictionary;
	int dictlen;
	char *find;

	if (ft_verif(argc, argv, find, filename) == 0)
	{
		ft_putstr(MSG);
		return (0);
	}
	dictionary = malloc(sizeof(*dictionary)* BUF_SIZE);
	int filedesc = open_file(filename);
	char *str = read_file(filedesc);
	dictlen = create_dict(dictionary, str, "\n");
	//clean_dict(dictionary, dictlen);
	char *found = search_dict(dictionary, argv[1], dictlen);
	printf("dictlen == %s\n", found);
	
	return (0);

}