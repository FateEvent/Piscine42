NAME = ft_cat

SRC = ft_cat.c ft_open_file.c ft.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	gcc -o $(NAME) ft_cat.o ft_open_file.o ft.o ft.h

clean:
	/bin/rm -f ft_cat.o ft_open_file.o ft.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all