# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/06 18:01:21 by zhewong           #+#    #+#              #
#    Updated: 2024/06/14 11:03:51 by zhewong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile
NAME = libft.a

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./

# Source files
SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	   ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strdup.c \
	   ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
	   ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	   ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memmove.c \

# Object files
OBJS = $(SRCS:.c=.o)

# BONUS files
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \

# BONUS object files
BONUS_OBJS = $(BONUS:.c=.o)

# Default target
all: $(NAME) bonus

# Compile the executable
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compile each source file
$(OBJS) : %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Compile bonus
bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

#Clean object files
clean: 
	rm -f $(OBJS) $(BONUS_OBJS)

# Clean all generated files
fclean: clean
	rm -f $(NAME) $(BONUS_OBJS)

# Rebuild the project
re: fclean all

.PHONY: all clean fclean re bonus
