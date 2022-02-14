NAME	= ft_cat

SRCS	= ft_cat.c ft_open_file.c ft.c

all:	$(NAME)

$(NAME):
		gcc -c -Wall -Werror -Wextra $(SRCS)
		gcc -o $(NAME) ft_cat.o ft_open_file.o ft.o ft.h

clean:
		rm -f ft_cat.o ft_open_file.o ft.o

fclean:	clean
		rm -f $(NAME)

re:		fclean all