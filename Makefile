# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/25 22:40:56 by victode-          #+#    #+#              #
#    Updated: 2025/08/26 16:05:16 by victode-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

SRCS= $(wildcard *.c)

OBJS= $(SRCS:.c=.o)

CC= cc

FLAGS= -Wall -Wextra -Werror

COMPRESS= ar rcs

RM= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPRESS) $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

#test: $(NAME) main.c
#	$(CC) $(CFLAGS) main.c -L. -lft

.PHONY: all clean fclean re test