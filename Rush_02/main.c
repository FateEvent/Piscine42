#include <stdlib.h>
#include <unistd.h>

# include "msg.h"
# include "ft.h"

int main(int argc, char *argv[])
{
	char	*filename = "numbers.dict";

	if (argc == 2)
		ft_check_args(argv[1]);
	if (argc == 3)
		ft_check_args(argv[2]);
	if (argc == 1 || argc < 3)
		ft_putstr(MSG);
}