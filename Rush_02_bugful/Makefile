# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/26 14:21:29 by faventur          #+#    #+#              #
#    Updated: 2021/11/28 21:22:12 by faventur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= rush_02
PATH_SRCS	= ./srcs/
PATH_HEADER	= ./includes/
FLAG		= -Wall -Wextra -Werror
SRCS		= $(PATH_SRCS)dict_utils.c $(PATH_SRCS)file_utils.c $(PATH_SRCS)utils.c main.c $(PATH_SRCS)various.c
OBJS		= ${SRCS:.c=.o}

$(NAME):		${OBJS}
			gcc $(FLAG) -I${PATH_HEADER} ${SRCS} -o ${NAME}

all:		
			$(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)