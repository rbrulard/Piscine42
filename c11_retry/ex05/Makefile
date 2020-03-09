# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robrular <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/18 17:27:41 by robrular          #+#    #+#              #
#    Updated: 2019/07/22 14:05:28 by robrular         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		do-op

SRCS =		ft_do_op.c ft_operator.c main.c

OBJS =		${SRCS:.c:=.o}

FLAGS =		-Wall -Werror -Wextra

LIB =		ft_op.h

all:		${NAME}

${NAME}:	${OBJS}
			gcc ${FLAGS} ${OBJS} -o ${NAME} -I ${LIB}

clean:
			rm -f *.o

fclean: clean
			rm -f ${NAME}

.PHONY:		all clean fclean
