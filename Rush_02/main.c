//#include "imports.h"
#include "models.h"
#include <stdlib.h>


char    *search_dict(dict *dictionary, char *find, int dictlen);
void    clean_dict(dict *dictionary, int dictlen);
int     create_dict(dict *dictionary, char *str, char *sep);
int     open_file(char *filename);
char    *read_file(int filedesc);

#include <stdio.h>

int main(int argc, char *argv[])
{
	char	*filename = "../numbers.dict";
	dict *dictionary;
	int dictlen;


	dictionary = malloc(sizeof(*dictionary)* BUF_SIZE);
	int filedesc = open_file(filename);
	char *str = read_file(filedesc);
	dictlen = create_dict(dictionary, str, "\n");
	for (int i = 0; i < dictlen; i++)
	{
		printf("dict.key == %s\n", dictionary[i].key);
		printf("dict.value == %s\n", dictionary[i].value);
	}
	clean_dict(dictionary, dictlen);
//	char *found = search_dict(dictionary, argv[1], dictlen);
//	printf("dictlen == %s \n", found);
	
	return (0);

}