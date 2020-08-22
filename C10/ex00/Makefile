# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/17 23:14:04 by rysato            #+#    #+#              #
#    Updated: 2020/08/17 23:14:05 by rysato           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./srcs/main.c ./srcs/display_file.c ./srcs/string_utils.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= ft_display_file
CC		= gcc
RM		= rm -rf
CFLAGS	= -Wall -Wextra -Werror

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

norm :
	norminette -R CheckForbiddenSourceHeader */*.[ch]

re : fclean all

.PHONY: all clean fclean re .c.o test
