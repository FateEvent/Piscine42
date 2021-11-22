CC = cc -Wall -Werror -Wextra ${INCLUDES}

SRCS = main.c ft_check.c ft_verify_tab.c ft_solve.c ft_init.c ft_null_index.c ft_atoi.c ft_check_row.c ft_double_check.c ft_print_tab.c ft_fill.c ft_fill_utils.c

OBJS = ${SRCS:.c=.o}

NAME = rush-01

all: ${OBJS}
	${CC} ${SRCS} -o ${NAME}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

