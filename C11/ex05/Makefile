# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/22 14:27:45 by rysato            #+#    #+#              #
#    Updated: 2020/08/22 14:27:46 by rysato           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./srcs/ft_atoi.c ./srcs/ft_char_write.c ./srcs/ft_is.c ./srcs/ft_number_write.c ./srcs/ft_operation.c ./srcs/ft_str_write.c ./srcs/main.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= do-op
CC		= gcc
RM		= rm -f
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
	norminette */*.[ch]

find_sources :
	@find srcs -type f -name "*.c" | xargs -I{} echo ./{} | tr '\n' ' '

.PHONY: all clean fclean re .c.o test
