# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/26 14:21:29 by faventur          #+#    #+#              #
#    Updated: 2021/11/26 15:02:11 by faventur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
PATH_SRCS	= ./srcs/
HEADER		= ./includes/
FLAG		= -Wall -Wextra -Werror
OPTION		= -c -I $(HEADER)
SRC			= $(PATH_SRCS)ft_putchar.c $(PATH_SRCS)ft_putstr.c $(PATH_SRCS)ft_strlen.c $(PATH_SRCS)ft_swap.c
OBJS		= ft_putchar.o ft_putstr.o ft_strlen.o ft_swap.o

all:		$(NAME)

$(NAME):
			gcc $(FLAG) $(OPTION) $(SRC)
			ar rc $(NAME) $(OBJS)

clean:
			/bin/rm -f $(OBJS)

fclean:		clean
			/bin/rm -f $(NAME)

re:			fclean all