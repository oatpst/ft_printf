# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pwanakit <pwanakit@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 10:30:43 by pwanakit          #+#    #+#              #
#    Updated: 2024/01/11 11:43:39 by pwanakit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_putnbr_base.c

OBJ = ${SRC:.c=.o}

all:	$(NAME)

$(NAME):$(OBJ)
		ar -rcs $(NAME) $(OBJ)

%.o:	%.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ)
		
fclean:
		rm -rf $(NAME) $(OBJ)

re:	fclean	all

.PHONY:	re	clean	fclean	all