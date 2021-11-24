#include <stdio.h>
#include "ft_abs.h"

int ft_abs(int nb)
{
    return (ABS(nb));
}

int main()
{
    int p = ft_abs(457773);
    printf("%d", p);
}