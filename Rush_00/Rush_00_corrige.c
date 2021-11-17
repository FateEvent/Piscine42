#include <unistd.h>

void	rush(int	x, int	y);
void	print_first_line(int	x);
void	ft_putchar(char	c);
void	insert_space(int	x);
void	print_vertically(int	x, int	y);
void	print_last_line(int	x);

int	main()
{
	rush(1, 5);
	return (0);
}

void	rush(int	x, int	y)
{
	if (x < 1 || y < 1)
		return;
	print_first_line(x);
    print_vertically(x, y);
    print_last_line(x);
}

void	print_first_line(int	x)
{
	ft_putchar('o');
	x--;
	while(x > 1)
	{
		ft_putchar('-');
		x--;
    }
    if(x == 1)
        ft_putchar('o');
    ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_vertically(int	x, int	y)
{
	if (x == 1)
	{
        while(y > 0)
        {
            ft_putchar('|');
            y--;
        }
    }
	else
    {
		while (x > 0)
		{
            ft_putchar('|');
            if (x == 2)
                insert_space(x);
            ft_putchar('|');
            ft_putchar('\n');
			y--;
		}
    }
}

void	insert_space(int	x)
{
    x--;
	while (x > 1)
	{
		ft_putchar(' ');
        x--;
	}
}

void	print_last_line(int	x)
{
	ft_putchar('o');
    x--;
	if (x > 1)
	{
		ft_putchar('-');
		x--;
	}
	if (x == 1)
        ft_putchar('o');
}
