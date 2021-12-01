#ifndef IMPORTS_H
# define IMPORTS_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "models.h"
#include "msg.h"

char	**ft_split(char *str, char *charset);
int     ft_strcmp(char *s1, char *s2);

char    *search_dict(dict *dictionary, char *find, int dictlen);
void    clean_dict(dict *dictionary, int dictlen);
int     create_dict(dict *dictionary, char *str, char *sep);

int     open_file(char *filename);
char    *read_file(int filedesc);



#endif