void	ft_verif(int argc, char *argv[], char *find, char *filename)
{
	if (argc == 1 || argc > 3)
		ft_putstr(MSG);
	else if (argc == 2 && ft_check_args(argv[1]) == 0)
		ft_putstr(MSG);
	else if (argc == 3 && ft_check_args(argv[2]) == 0)
		ft_putstr(MSG);
	if (argc == 2 && ft_check_args(argv[1]) == 1)
		find = argv[1];
	if (argc == 3 && ft_check_args(argv[2]) == 1)
	{
		filename = argv[1];
		find = argv[2];
	}
}