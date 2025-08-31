# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/25 22:40:56 by victode-          #+#    #+#              #
#    Updated: 2025/08/31 03:30:29 by victode-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library name
NAME= libft.a

# Files to compile
SRCS= $(wildcard *.c)
OBJS= $(SRCS:.c=.o)

# Compile and Flag commands
CC= cc
FLAGS= -Wall -Wextra -Werror

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

# Compile the objects
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

# Rule: clean = remove temporary files (objects)
clean:
	$(RM) $(OBJS)

# Rule: fclean = remove all files (objects and libft.a)
fclean: clean
	$(RM) $(NAME)

# Rule: re = equivalent to -make fclean- and -make all-
re: fclean all

#test: $(NAME) main.c
#	$(CC) $(CFLAGS) main.c -L. -lft

.PHONY: all clean fclean re test