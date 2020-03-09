# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robrular <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/20 13:56:16 by robrular          #+#    #+#              #
#    Updated: 2019/07/21 19:36:46 by robrular         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

PATH = srcs/

SRCS =  $(PATH)main.c\
	$(PATH)ft_cutnbr.c\
	$(PATH)ft_split.c\
	$(PATH)ft_struct.c\
	$(PATH)ft_atoi.c\
	$(PATH)ft_parsing.c\
	$(PATH)ft_string_handle.c\
	$(PATH)ft_workers.c\

LIB = includes

OBJS = ${SRCS:.c:=.o}

FLAGS = -Wall -Werror -Wextra


all:${NAME}

${NAME}:	${OBJS}
			gcc ${FLAGS} ${OBJS} -o ${NAME} -I ${LIB}

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f ${NAME}

re: fclean all

.PHONY:all clean fclean
