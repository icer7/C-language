# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/19 16:23:47 by rysato            #+#    #+#              #
#    Updated: 2020/08/19 16:23:48 by rysato           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./srcs/ft_args_parser.c ./srcs/ft_console_io.c ./srcs/ft_dumper.c ./srcs/ft_equal_buffer.c ./srcs/ft_file_utils.c ./srcs/ft_file_utils2.c ./srcs/ft_hexdump.c ./srcs/ft_strncpy.c ./srcs/ft_write_number.c ./srcs/main.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= ft_hexdump
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
