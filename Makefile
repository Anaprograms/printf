# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ansuarez <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/27 09:25:40 by ansuarez          #+#    #+#              #
#    Updated: 2025/01/28 16:16:11 by ansuarez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
DFLAGS = -MT $@ -MMD -MP

SRCS =	ft_printf.c \
		ft_printchar.c \
		ft_printhex.c \
		ft_printchar_fd.c \
		ft_printunsigned.c \
		ft_printbase10.c \
		ft_printptr.c \
		ft_printhex.c \
		ft_strlen.c \
		ft_printstring.c\


OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)

all: $(NAME)

$(NAME): $(OBJS)
	 ar rcs $(NAME) $(OBJS)

%.o: %.c Makefile ft_printf.h
	$(CC) $(CFLAGS) $(DFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)
	

re: fclean all
-include $(DEPS)

.PHONY:
	all clean fclean re

