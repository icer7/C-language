# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/19 16:23:58 by rysato            #+#    #+#              #
#    Updated: 2020/08/19 16:24:01 by rysato           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./srcs/ft_abs.c ./srcs/ft_args_parser.c ./srcs/ft_atoi.c ./srcs/ft_console_io.c ./srcs/ft_is.c ./srcs/ft_strncpy.c ./srcs/ft_tail.c ./srcs/ft_tail_out.c ./srcs/ft_tail_utils.c ./srcs/main.c 
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= ft_tail
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
