# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: martafer <martafer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/24 10:50:50 by martafer          #+#    #+#              #
#    Updated: 2025/12/04 14:47:25 by martafer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = base_16.c \
		ft_printf.c \
		write_c.c \
		write_hex.c \
		write_int.c \
		write_p.c \
		write_s.c \
		write_u.c

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	${RM} $(OBJS)

fclean:	clean
		${RM} $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
