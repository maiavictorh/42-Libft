# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/25 22:40:56 by victode-          #+#    #+#              #
#    Updated: 2025/09/11 02:11:17 by victode-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library name
NAME= libft.a

# Files to compile
SRCS= $(wildcard srcs/ft_conv/*.c) \
		$(wildcard srcs/ft_mem/*.c) \
		$(wildcard srcs/ft_put/*.c) \
		$(wildcard srcs/ft_str/*.c) \
		$(wildcard srcs/ft_type/*.c)
BONUS= $(SRCS) $(wildcard srcs/ft_list/*.c)

# Object files
OBJS= $(SRCS:.c=.o)
BNS_OBJS= $(BONUS:.c=.o)

# Compile and flag commands
CC= cc
CFLAGS= -Wall -Wextra -Werror -Iincludes

# Compress commands
COMPRESS= ar rcs

# Remove commands
RM= rm -f

# Rule: all = libft.a
all: $(NAME)

# Libft.a = compress objects and create library
$(NAME): $(OBJS)
	$(COMPRESS) $(NAME) $(OBJS)
	ranlib $(NAME)

# Rule: bonus = compress bonus functions objects
bonus: $(BNS_OBJS)
	$(COMPRESS) $(NAME) $(BNS_OBJS)

# Compile the objects
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule: clean = remove temporary files (objects)
clean:
	$(RM) $(OBJS) $(BNS_OBJS)

# Rule: fclean = remove all files (objects and libft.a)
fclean: clean
	$(RM) $(NAME)

# Rule: re = equivalent to <make fclean> and <make all>
re: fclean all

# test: $(NAME) main.c
# 	$(CC) $(CFLAGS) main.c -L. -lft -o test

.PHONY: all clean fclean re test
