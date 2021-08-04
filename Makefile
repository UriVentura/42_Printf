# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oventura <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/25 17:15:08 by oventura          #+#    #+#              #
#    Updated: 2021/07/25 20:10:04 by oventura         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS := -Wall -Wextra -Werror

CC := cc

SRC = ./srcs/ft_char.c \
		./srcs/ft_convert.c \
		./srcs/ft_hexa.c \
		./srcs/ft_number.c \
		./srcs/ft_pointer.c \
		./srcs/ft_printf.c \
		./srcs/ft_string.c \
		./srcs/ft_unumber.c \
		./srcs/ft_utils.c \
		./srcs/main.c
	  				
OBJ = $(SRC:.c=.o)

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	ar rc $(NAME) $?

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean clean all

.PHONY: all clean fclean re