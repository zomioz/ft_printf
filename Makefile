# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 12:47:40 by pirulenc          #+#    #+#              #
#    Updated: 2023/12/07 12:54:44 by pirulenc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES = ft_printf.c \
			ft_print_check.c \
			ft_put_hexa.c

CFLAGS = -Wall \
			-Werror \
			-Wextra

CC = cc

AR = ar -rcs

OBJECTS = $(SOURCES:.c=.o)

%.o: %.c
		@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJECTS)
		$(AR) $(NAME) $(OBJECTS)

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re:	fclean all
