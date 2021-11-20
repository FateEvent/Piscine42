#include <unistd.h>

int *ft_init(void);

int *ft_init(void)
{
    int *tab;
    int i;

    tab = (int *) malloc (16 * sizeof(int));
    if (tab == NULL)
    {
        exit(0);
    }
    i = 0;
    while (i < 16)
    {
        tab[i] = 0;
        i++;
    }
    return (tab);
}

/* Je demande à allouer de la mémoire pour 16 variables de type int et je les initialise à 0. */