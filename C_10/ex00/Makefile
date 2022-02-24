CC = gcc
CFLAGS = -Wall -Werror -Wextra

RM		= rm -f

NAME	= ft_display_file

SRCS	= ft_display_file.c

OBJS	= ${SRCS:.c=.o}

all:		$(NAME)

${NAME}:	${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} $(NAME)

re:			fclean all