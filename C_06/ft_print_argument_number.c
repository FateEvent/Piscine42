#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

int     main(int argc, char *argv[])
{
    (void) argc;
    (void) argv;
    ft_putnbr(argc);

    return (0);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
			ft_putchar(nb + '0');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
