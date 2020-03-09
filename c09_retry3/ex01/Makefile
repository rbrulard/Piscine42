# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robrular <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 12:37:15 by robrular          #+#    #+#              #
#    Updated: 2019/07/23 15:35:36 by robrular         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAG = -Wall -Wextra -Werror

PATH_SRC = ./srcs/

HEADER = ./includes

SRC = $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_swap.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_strcmp.c

OBJ = ${SRC:.c=.o}

all: $(NAME)

.c.o :
	gcc -c $(FLAG) -I $(HEADER) $< -o $(<:.c=.o)

$(NAME) : ${OBJ}
		  ar rc $(NAME) $(OBJ)

clean:
	rm -f ${OBJ}

fclean: clean
		rm -f $(NAME)

re : fclean all
