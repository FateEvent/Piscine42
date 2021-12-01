//#include "imports.h" 
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "models.h"

int open_file(char *filename)
{
        int filedesc;

        filedesc = open(filename, O_RDONLY);
        return (filedesc);
}

char *read_file(int filedesc)
{
    int size;
    char *dict_str;

    dict_str = (char *)malloc(sizeof(char) * BUF_SIZE);
    size = read(filedesc, dict_str, BUF_SIZE);
    dict_str[size] = '\0';
    free(dict_str);
    close(filedesc);
    return (dict_str);
}

/*int main(void)
{
    int filedesc = open_file("../numbers.dict");
    printf("[%d] file openned\n", filedesc);
    char *result = read_file(filedesc);
    printf("the value in the file is: \n%s", result);

    return (0);
}
*/
