# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/06 16:43:29 by zhewong           #+#    #+#              #
#    Updated: 2024/08/06 16:43:31 by zhewong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile for pipex.a

# Project name
NAME = pipex

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./includes -I./libft

LIBFT = libft/libft.a

# Source files
SRCS = src/pipex.c src/utils.c

# Object files
OBJS = $(SRCS:.c=.o)

# Default target
all: $(NAME)

# Compile the library
$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

# Compile each source file into an object file
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT) :
	make -C libft

# Clean object files
clean: 
	rm -f $(OBJS)

# Clean all generated files
fclean: clean
	rm -f $(NAME)
	make -C libft fclean

# Rebuild the project
re: fclean all

# Targets
.PHONY: all clean fclean re
